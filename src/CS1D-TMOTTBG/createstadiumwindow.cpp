#include "createstadiumwindow.h"
#include "ui_createstadiumwindow.h"
#include <QSqlQuery>

CreateStadiumWindow::CreateStadiumWindow(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::CreateStadiumWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

CreateStadiumWindow::~CreateStadiumWindow()
{
    delete ui;
}

void CreateStadiumWindow::on_cancelButton_clicked()
{
    this->close();
}

void CreateStadiumWindow::on_saveButton_clicked()
{

    stadiumName         = ui->stadiumNameEditBox->text();
    stadiumTeamName     = ui->teamNameEditBox->text();
    address             = ui->addressEditBox->text();
    phoneNumber         = ui->phoneNumberEditBox->text();
    dateOpened          = ui->openningDateEditBox->text();
    population          = ui->seatingCapacityEditBox->text();
    americanLeague      = (ui->leagueTypeComboBox->currentText() == "National League"?"0":"1");
    grass               = (ui->grassTypeComboBox->currentText() == "Astro Turf"?"0":"1");

    query.prepare("INSERT INTO `stadiums`(`stadiumName`, `stadiumTeamName`, `address`, `phoneNumber`, `dateOpened`, `population`, `americanLeague`, `grass`) VALUES (:stadiumName, :stadiumTeamName, :address, :phoneNumber, :dateOpened, :population, :americanLeague, :grass)");
    query.bindValue(":stadiumName",stadiumName);
    query.bindValue(":stadiumTeamName",stadiumTeamName);
    query.bindValue(":address",address);
    query.bindValue(":phoneNumber",phoneNumber);
    query.bindValue(":dateOpened", dateOpened);
    query.bindValue(":population",population);
    query.bindValue(":americanLeague",americanLeague);
    query.bindValue(":grass",grass);
    query.exec();
    this->close();


}
