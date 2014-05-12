#include "admineditselectedoutputlist.h"
#include "ui_admineditselectedoutputlist.h"
#include <QString>
#include <QMessageBox>
#include <QDebug>

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

void AdminEditSelectedOutputList::on_resetButton_clicked()
{
    ui->stadiumNameEditBox->setText(stadiumName);
    ui->teamNameEditBox->setText(stadiumTeamName);
    ui->addressEditBox->setText(address);
    ui->phoneNumberEditBox->setText(phoneNumber);
    ui->openningDateEditBox->setText(dateOpened);
    ui->seatingCapacityEditBox->setText(population);
    ui->leagueTypeComboBox->setCurrentIndex((americanLeague != "1"?0:1));
    ui->grassTypeComboBox->setCurrentIndex((grass == "1"?0:1));
}

void AdminEditSelectedOutputList::on_saveButton_clicked()
{


    stadiumName     = ui->stadiumNameEditBox->text();
    stadiumTeamName = ui->teamNameEditBox->text();
    address         = ui->addressEditBox->text();
    phoneNumber     = ui->phoneNumberEditBox->text();
    dateOpened      = ui->openningDateEditBox->text();
    population      = ui->seatingCapacityEditBox->text();

    grass           = (ui->grassTypeComboBox->currentText() == "Astro Turf"?"0":"1");
    americanLeague  = (ui->leagueTypeComboBox->currentText() != "American League"?"0":"1");

        qDebug() << "meow";
        query.prepare( "UPDATE `stadiums` SET `stadiumName`=:stadiumName,`stadiumTeamName`=:stadiumTeamName,`address`=:address,`phoneNumber`=:phoneNumber,`dateOpened`=:dateOpened,`population`=:population,`americanLeague`=:americanLeague,`grass`=:grass WHERE id=" + userID);


        query.bindValue(":stadiumName",stadiumName);
        query.bindValue(":stadiumTeamName",stadiumTeamName);
        query.bindValue(":address",address);
        query.bindValue(":phoneNumber",phoneNumber);
        query.bindValue(":dateOpened",dateOpened);
        query.bindValue(":population",population);
        query.bindValue(":americanLeague",americanLeague);
        query.bindValue(":grass",grass);

        query.exec();
        this->close();

}

void AdminEditSelectedOutputList::on_deleteButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirm Deletion from Database, Cannot be undone");
     QPushButton *connectButton = msgBox.addButton(tr("Confirm Delete"), QMessageBox::ActionRole);
     QPushButton *abortButton = msgBox.addButton(QMessageBox::Abort);

     msgBox.exec();

     if (msgBox.clickedButton() == connectButton) {
         query.prepare("DELETE from `stadiums` WHERE id=" + userID + " LIMIT 1;");
         query.exec();
         this->close();
     }
}
