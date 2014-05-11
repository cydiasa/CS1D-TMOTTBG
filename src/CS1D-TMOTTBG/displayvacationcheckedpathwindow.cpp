#include "displayvacationcheckedpathwindow.h"
#include "ui_displayvacationcheckedpathwindow.h"
#include "QDebug"
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QString>
#include <QtXml/QDomDocument>
#include <QtXml/QDomDocument>

displayVacationCheckedPathWindow::displayVacationCheckedPathWindow(QList<QString> checkedBoxList, QString startLocation, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::displayVacationCheckedPathWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    QString distanceURL;

    this->startLocation = startLocation;

    for (int var = 0; var < checkedBoxList.count(); ++var) {
        query.exec("SELECT address, stadiumTeamName FROM stadiums WHERE stadiumTeamName = \"" + checkedBoxList.at(var).split(",")[0] + "\";");
        while(query.next())
        {
            checkedBoxAddress.append(query.value(0).toString());
        }
    }

    query.exec("SELECT address FROM stadiums WHERE stadiumTeamName = \"" + startLocation.split(",")[0] + "\";");
    while(query.next())
    {
        startLocationAddress = query.value(0).toString();
    }

    distanceURL = "http://maps.googleapis.com/maps/api/distancematrix/xml?";

    distanceURL += "origins=" + startLocationAddress.replace(", ", "+").replace(" ", "+") + "&destinations=" + checkedBoxAddress.at(0).toUtf8().replace(", ", "+").replace(" ", "+");
    for (int var = 1; var < checkedBoxAddress.count(); ++var) {
          distanceURL += "|" + checkedBoxAddress.at(var).toUtf8().replace(", ", "+");
    }

    distanceURL += "&mode=driving&sensor=false&units=imperial";

    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(fileIsReady(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl(distanceURL)));

}


void displayVacationCheckedPathWindow::fileIsReady( QNetworkReply * reply)
{
    sortedList.clear();
    QString mapURL = "http://maps.googleapis.com/maps/api/staticmap?size=640x640&sensor=false&maptype=hybrid&path=color:0x0000ff80|weight:5|" + startLocationAddress;
    QString returnedXML = reply->readAll();
    QString outputText;
    int totalDistance = 0;

    QDomDocument mDocument;
    QDomElement  mDocumentElement;

    mDocument.setContent(returnedXML);

    QDomNode row = mDocument.namedItem("DistanceMatrixResponse").lastChildElement();
    QDomNode root = mDocument.namedItem("DistanceMatrixResponse");
    QDomNodeList distanceNode = row.childNodes();
    QDomNodeList nameNode = root.childNodes();

    for (int i = 0; i < distanceNode.count(); ++i)
    {
        sortedList.insert(distanceNode.at(i).toElement().namedItem("distance").childNodes().at(1).toElement().text().replace(",","").split(" ")[0].toDouble(), nameNode.at(i+2).toElement().text());
    }

    QMap<double, QString>::iterator i;
    mapURL += "|" + startLocationAddress;
    for (i = sortedList.begin(); i != sortedList.end(); ++i)
    {
         mapURL += "|" + i.value().replace(", ", "+").replace(" ", "+");
    }

    mapURL  += "&markers=color:red%7Clabel+" + startLocationAddress;
    QMap<double, QString>::iterator j;
    for (j = sortedList.begin(); j != sortedList.end(); ++j)
    {
        mapURL += "|" + j.value().replace(", ", "+").replace(" ", "+");
    }

    outputText = "The shortest Path from " + startLocation + " to " + sortedList.end().operator --().value() + ".";

    QMap<double, QString>::iterator  x;
    for (x = sortedList.begin(); x != sortedList.end(); ++x)
    {
        totalDistance += x.key();
        outputText += "\n" + x.value().replace("+", " ") + " Distance " + QString::number(x.key());
    }
    outputText += "\n\nTotal Distance Traveled: " + QString::number(totalDistance);
    ui->outputLabel->setText(outputText);
    ui->webDisplayBox->load(QUrl(mapURL));

}

displayVacationCheckedPathWindow::~displayVacationCheckedPathWindow()
{
    delete ui;
}
