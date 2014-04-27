#include "outputlistwindow.h"
#include "ui_outputlistwindow.h"
#include "outputlistdelegate.h"
#include "displayindividualstadiuminformationwindow.h"
#include <QTableWidgetItem>
#include <QSqlQuery>
#include <QDebug>
#include <QAbstractItemView>


OutputListWindow::OutputListWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputListWindow)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_DeleteOnClose);
    connect(ui->tableWidget, SIGNAL(cellActivated(int,int)), this, SLOT(cellPopup(int)));


}
void OutputListWindow::cellPopup(int row)
{
    DisplayIndividualStadiumInformationWindow *dashboardWindow;
    dashboardWindow = new DisplayIndividualStadiumInformationWindow(ui->tableWidget->item(row, 0)->text());
    dashboardWindow->show();
}
OutputListWindow::~OutputListWindow()
{
    delete ui;
}

void OutputListWindow::on_pushButton_clicked()
{
    ui->tableWidget->setRowCount(0);

    QString searchInput = ui->searchInputBox->text();
    QString searchType  = ui->searchTypeComboBox->currentText();
    QString leagueType  = ui->leagueComboBox->currentText();
    QString feildType   = ui->feildTypeComboBox->currentText();
    int stadiumTeamNameLength = 0;
    int stadiumNameLength = 0;
    int addressLength = 0;
    int phoneNumberLength = 0;
    int dateOpenedLength = 0;
    int populationLength = 0;
    QString queryStatement = "SELECT `stadiumTeamName`, `stadiumName`, `address`, `phoneNumber`, `dateOpened`, `population`, `americanLeague`, `grass`, `id` FROM `stadiums` ";


    if(searchType == "Stadiums & Team Names")
    {
        queryStatement += "WHERE (`stadiumTeamName` LIKE \"%" + searchInput + "%\" OR `stadiumName` LIKE \"%" + searchInput + "%\") ";
        if(leagueType == "National League")
        {
            queryStatement += "AND americanLeague = 0 ";
            if(feildType == "Astro Turf")
            {
                queryStatement += "AND grass = 0";
            }
            else if(feildType == "Grass")
            {
                queryStatement += "AND grass = 1";
            }
        }
        else if(leagueType == "American League")
        {
            queryStatement += "AND americanLeague = 1 ";
            if(feildType == "Astro Turf")
            {
                queryStatement += "AND grass = 0";
            }
            else if(feildType == "Grass")
            {
                queryStatement += "AND grass = 1";
            }
        }
        else
        {
            if(feildType == "Astro Turf")
            {
                queryStatement += "AND grass = 0";
            }
            else if(feildType == "Grass")
            {
                queryStatement += "AND grass = 1";
            }
        }
    }
    else if(searchType == "Stadiums Names Only")
    {
        queryStatement += "WHERE (`stadiumName` LIKE \"%" + searchInput + "%\") ";
        if(leagueType == "National League")
        {
            queryStatement += "AND americanLeague = 0 ";
            if(feildType == "Astro Turf")
            {
                queryStatement += "AND grass = 0";
            }
            else if(feildType == "Grass")
            {
                queryStatement += "AND grass = 1";
            }
        }
        else if(leagueType == "American League")
        {
            queryStatement += "AND americanLeague = 1 ";
            if(feildType == "Astro Turf")
            {
                queryStatement += "AND grass = 0";
            }
            else if(feildType == "Grass")
            {
                queryStatement += "AND grass = 1";
            }
        }
        else
        {
            if(feildType == "Astro Turf")
            {
                queryStatement += "AND grass = 0";
            }
            else if(feildType == "Grass")
            {
                queryStatement += "AND grass = 1";
            }
        }
    }
    else if(searchType == "Team Names Only")
    {

        queryStatement += "WHERE (`stadiumTeamName` LIKE \"%" + searchInput + "%\") ";
        if(leagueType == "National League")
        {
            queryStatement += "AND americanLeague = 0 ";
            if(feildType == "Astro Turf")
            {
                queryStatement += "AND grass = 0";
            }
            else if(feildType == "Grass")
            {
                queryStatement += "AND grass = 1";
            }
        }
        else if(leagueType == "American League")
        {
            queryStatement += "AND americanLeague = 1 ";
            if(feildType == "Astro Turf")
            {
                queryStatement += "AND grass = 0";
            }
            else if(feildType == "Grass")
            {
                queryStatement += "AND grass = 1";
            }
        }
        else
        {
            if(feildType == "Astro Turf")
            {
                queryStatement += "AND grass = 0";
            }
            else if(feildType == "Grass")
            {
                queryStatement += "AND grass = 1";
            }
        }
    }

    queryStatement += ";";
    query.exec(queryStatement);
    qDebug() << queryStatement;
    while(query.next())
    {

        QString stadiumTeamNameS = query.value(0).toString();
        QString stadiumNameS     = query.value(1).toString();
        QString addressS         = query.value(2).toString();
        QString phoneNumberS     = query.value(3).toString();
        QString dateOpenedS      = query.value(4).toString();
        QString populationS      = query.value(5).toString();
        QTableWidgetItem *stadiumTeamName = new QTableWidgetItem(stadiumTeamNameS);
        QTableWidgetItem *stadiumName     = new QTableWidgetItem(stadiumNameS);
        QTableWidgetItem *address         = new QTableWidgetItem(addressS);
        QTableWidgetItem *phoneNumber     = new QTableWidgetItem(phoneNumberS);
        QTableWidgetItem *dateOpened      = new QTableWidgetItem(dateOpenedS);
        QTableWidgetItem *population      = new QTableWidgetItem(populationS);
        QTableWidgetItem *link            = new QTableWidgetItem("Click Here");


        QTableWidgetItem *league;
        if(query.value(6).toString() == "1")
        {
            league  = new QTableWidgetItem("American League");
        }
        else
        {
            league  = new QTableWidgetItem("National League");
        }


        int j = ui->tableWidget->rowCount();

        ui->tableWidget->insertRow(j);
        ui->tableWidget->setItem(j,0,stadiumName);
        if(stadiumNameS.length() > stadiumNameLength)
        {
            stadiumNameLength = stadiumNameS.length();
        }

        ui->tableWidget->setItem(j,1,stadiumTeamName);
        if(stadiumTeamNameS.length() > stadiumTeamNameLength)
        {
            stadiumTeamNameLength = stadiumTeamNameS.length();
        }

        ui->tableWidget->setItem(j,2,address);
        if(addressS.length() > addressLength)
        {
            addressLength = addressS.length();
        }

        ui->tableWidget->setItem(j,3,phoneNumber);
        if(phoneNumberS.length() > phoneNumberLength)
        {
            phoneNumberLength = phoneNumberS.length();
        }

        ui->tableWidget->setItem(j,4,dateOpened);
        if(dateOpenedS.length() > dateOpenedLength)
        {
            dateOpenedLength = dateOpenedS.length();
        }

        ui->tableWidget->setItem(j,5,population);
        if(populationS.length() > populationLength)
        {
            populationLength = populationS.length();
        }

        ui->tableWidget->setItem(j,6,league);

        ui->tableWidget->setItem(j,7,link);

        ui->tableWidget->setSortingEnabled(true);
    }

    ui->tableWidget->setColumnWidth(0,stadiumNameLength*6);
    ui->tableWidget->setColumnWidth(1,stadiumTeamNameLength*6);
    ui->tableWidget->setColumnWidth(2,addressLength*5.75);
    ui->tableWidget->setColumnWidth(3,phoneNumberLength*6);
    ui->tableWidget->setColumnWidth(4,dateOpenedLength*6);
    ui->tableWidget->setColumnWidth(5,populationLength*5.25);
    ui->tableWidget->setColumnWidth(6,100);
    ui->tableWidget->setColumnWidth(7,75);

}
