#include "displayindividualstadiuminformationwindow.h"
#include "ui_displayindividualstadiuminformationwindow.h"
#include <QDebug>
#include <QSql>
#include <QSqlQuery>
#include <QUrl>
#include <QtWebKit>

DisplayIndividualStadiumInformationWindow::DisplayIndividualStadiumInformationWindow(QString id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DisplayIndividualStadiumInformationWindow)
{
    ui->setupUi(this);

    query.exec("SELECT `stadiumTeamName`, `stadiumName`, `address`, `phoneNumber`, `dateOpened`, `population`, `grass` FROM `stadiums` WHERE stadiumName = '" + id + "' LIMIT 1;");

    while(query.next())
    {
        QString stadiumTeamName = query.value(0).toString();
        QString stadiumName     = query.value(1).toString();
        QString address         = query.value(2).toString();
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

        ui->stadiumName->setText(stadiumName);
        ui->teamName->setText(stadiumTeamName);
        ui->population->setText(population);
        ui->grass->setText(grassType);
        ui->openDate->setText(dateOpened);
        ui->phoneNumber->setText(phoneNumber);
        ui->address->setText(address);
        ui->webView->load(QUrl("https://www.google.com/maps/place/" + address));
    }
}

DisplayIndividualStadiumInformationWindow::~DisplayIndividualStadiumInformationWindow()
{
    delete ui;
}
