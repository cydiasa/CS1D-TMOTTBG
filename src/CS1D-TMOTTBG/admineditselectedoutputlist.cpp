#include "admineditselectedoutputlist.h"
#include "ui_admineditselectedoutputlist.h"
#include <QString>

AdminEditSelectedOutputList::AdminEditSelectedOutputList(QString id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminEditSelectedOutputList)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_DeleteOnClose);
    userID = id;
    // Country list
//    query.exec("SELECT countryName FROM countryList ORDER BY priority DESC, countryName ASC");
//    while(query.next())
//    {
//        ui->countrySelectionBox->addItem(query.value(0).toString());
//    }

//    // Cell Providor List
//    query.exec("SELECT name FROM cellProvider ORDER BY name ASC");
//    while(query.next())
//    {
//        ui->cellProvidorSelectionBox->addItem(query.value(0).toString());
//    }

    query.exec("SELECT `stadiumName`, `stadiumTeamName`, `address`, `phoneNumber`, `dateOpened`, `population`, `americanLeague`, `grass` FROM `stadiums` WHERE id = '" + userID + "' LIMIT 1;");

    if(query.next())
    {
        stadiumName     = query.value(0).toString();
        stadiumTeamName = query.value(1).toString();
        address         = query.value(2).toString();
        phoneNumber     = query.value(3).toString();
        dateOpened      = query.value(4).toString();
        population      = query.value(5).toString();
//        americanLeague  = (query.value(6).toBool()?"American League":"National League");
//        grass           = (query.value(7).toBool()?"Grass":"Astro Turf");


        ui->stadiumNameEditBox->setText(stadiumName);
        ui->teamNameEditBox->setText(stadiumTeamName);
        ui->addressEditBox->setText(address);
        ui->phoneNumberEditBox->setText(phoneNumber);
        ui->openningDateEditBox->setText(dateOpened);
        ui->seatingCapacityEditBox->setText(population);
//        ui->leagueTypeComboBox->setCurrentText(americanLeague);
//        ui->grassTypeComboBox->setCurrentText(grass);
    }




}

AdminEditSelectedOutputList::~AdminEditSelectedOutputList()
{
    delete ui;
}

void AdminEditSelectedOutputList::on_cancelButton_clicked()
{
    this->close();
}

void AdminEditSelectedOutputList::on_cancelButton_2_clicked()
{
    ui->stadiumNameEditBox->setText(stadiumName);
    ui->teamNameEditBox->setText(stadiumTeamName);
    ui->addressEditBox->setText(address);
    ui->phoneNumberEditBox->setText(phoneNumber);
    ui->openningDateEditBox->setText(dateOpened);
    ui->seatingCapacityEditBox->setText(population);
    ui->leagueTypeComboBox->setCurrentText(americanLeague);
    ui->grassTypeComboBox->setCurrentText(grass);
}
