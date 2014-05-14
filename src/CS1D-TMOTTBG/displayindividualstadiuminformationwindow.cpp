#include "displayindividualstadiuminformationwindow.h"
#include "ui_displayindividualstadiuminformationwindow.h"
#include <QDebug>
#include <QSql>
#include <QSqlQuery>
#include <QUrl>
#include <QtWebKit>


#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QString>
#include <QtXml/QDomDocument>


DisplayIndividualStadiumInformationWindow::DisplayIndividualStadiumInformationWindow(QString id, QWidget *parent) :
    QMainWindow(parent, Qt::FramelessWindowHint),
    ui(new Ui::DisplayIndividualStadiumInformationWindow)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_DeleteOnClose);
    zoomLevel = 18;
    query.exec("SELECT `stadiumTeamName`, `stadiumName`, `address`, `phoneNumber`, `dateOpened`, `population`, `grass` FROM `stadiums` WHERE stadiumName = '" + id + "' LIMIT 1;");

    while(query.next())
    {
        address         = query.value(2).toString();
        QString stadiumTeamName = query.value(0).toString();
        QString stadiumName     = query.value(1).toString();
        QString phoneNumber     = query.value(3).toString();
        QString dateOpened      = query.value(4).toString();
        QString population      = query.value(5).toString();
        QString grassType;
        if(query.value(6).toString() == "1")
        {
            grassType = "Grass Feild";
        }
        else
        {
            grassType = "Astro Turf Feild";
        }

        queryDistance.exec("SELECT stadiumName FROM stadiums ORDER BY stadiumName ASC");
        while(queryDistance.next())
        {
             ui->distanceToDropDown->addItem(queryDistance.value(0).toString());
        }

        ui->stadiumName->setText(stadiumName);
        ui->teamName->setText(stadiumTeamName);
        ui->population->setText(population);
        ui->grass->setText(grassType);
        ui->openDate->setText(dateOpened);
        ui->phoneNumber->setText(phoneNumber);
        ui->address->setText(address);
        ui->webView->load(QUrl("http://maps.googleapis.com/maps/api/staticmap?zoom=" + QString::number(zoomLevel) + "&size=640x640&sensor=false&maptype=hybrid&markers=color:blue%7Clabel+" + address + "&left=" + address));
//        ui->webView_2->load(QUrl("http://maps.googleapis.com/maps/api/streetview?location="  + address + "&zoom=18&size=393x479&fov=90&sensor=false"));
    }
}

DisplayIndividualStadiumInformationWindow::~DisplayIndividualStadiumInformationWindow()
{
    delete ui;
}

void DisplayIndividualStadiumInformationWindow::on_zoonIncreaseButton_clicked()
{
    if(zoomLevel<20)
    {
        ++zoomLevel;
    }
    ui->webView->load(QUrl("http://maps.googleapis.com/maps/api/staticmap?zoom=" + QString::number(zoomLevel) + "&size=640x640&sensor=false&maptype=hybrid&markers=color:blue%7Clabel+" + address + "&left=" + address));
}

void DisplayIndividualStadiumInformationWindow::on_zoonDecreaseButton_clicked()
{
    if(zoomLevel>0)
    {
        --zoomLevel;
    }

    ui->webView->load(QUrl("http://maps.googleapis.com/maps/api/staticmap?zoom=" + QString::number(zoomLevel) + "&size=640x640&sensor=false&maptype=hybrid&markers=color:blue%7Clabel+" + address + "&left=" + address));
}

void DisplayIndividualStadiumInformationWindow::on_distanceToDropDown_currentTextChanged(const QString &arg1)
{
    destination = ui->distanceToDropDown->currentText();
    queryDistanceAddress.exec("SELECT address, stadiumName FROM stadiums WHERE stadiumName = \"" + destination + "\";");
    while(queryDistanceAddress.next())
    {
        destination =  queryDistanceAddress.value(0).toString();


    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(fileIsReady(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl("http://maps.googleapis.com/maps/api/distancematrix/xml?origins=" + address + "&destinations=" + destination + "&mode=driving&sensor=false&units=imperial")));
    qDebug() << "http://maps.googleapis.com/maps/api/distancematrix/xml?origins=" + address + "&destinations=" + destination  + "&mode=driving&sensor=false&units=imperial";
    }
}

void DisplayIndividualStadiumInformationWindow::fileIsReady( QNetworkReply * reply)
{
    static QMap<double, QString> sortedList;
    QString returnedXML = reply->readAll();

    qDebug() << returnedXML;
    QDomDocument mDocument;
    mDocument.setContent(returnedXML);

    QDomNode row = mDocument.namedItem("DistanceMatrixResponse").lastChildElement();
    QDomNode root = mDocument.namedItem("DistanceMatrixResponse");
    QDomNodeList distanceNode = row.childNodes();
    QDomNodeList nameNode = root.childNodes();

    ui->IndividualStadium_Distance_LBL->setText(" is " + distanceNode.at(0).toElement().namedItem("distance").childNodes().at(1).toElement().text().replace(",","").split(" ")[0] + " Miles");

}

void DisplayIndividualStadiumInformationWindow::on_IndividualStadium_Exit_BTN_clicked()
{
    this->close();
}
