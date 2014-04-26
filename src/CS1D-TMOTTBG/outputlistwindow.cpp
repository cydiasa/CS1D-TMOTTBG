#include "outputlistwindow.h"
#include "ui_outputlistwindow.h"
#include "outputlistdelegate.h"
#include <QTableWidgetItem>
#include <QSqlQuery>
#include <QDebug>
#include <QAbstractItemView>


OutputListWindow::OutputListWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputListWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnWidth(2,275);
    ui->tableWidget->setColumnWidth(7,25);
    connect(ui->tableWidget, SIGNAL(cellActivated(int,int)), this, SLOT(cellPopup(int, int)));


}
void OutputListWindow::cellPopup(int row,int col)
{
//    DashboardWindow *dashboardWindow;
//    dashboardWindow = new DashboardWindow();
//    dashboardWindow->show();
    //    this->hide();
    qDebug() << ui->tableWidget->item(row, col)->text();
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
        QTableWidgetItem *stadiumTeamName = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *stadiumName     = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *address         = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *phoneNumber     = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *dateOpened      = new QTableWidgetItem(query.value(4).toString());
        QTableWidgetItem *population      = new QTableWidgetItem(query.value(5).toString());

        QTableWidgetItem *league;
        if(query.value(6).toString() == "1")
        {
            league  = new QTableWidgetItem("American League");
        }
        else
        {
            league  = new QTableWidgetItem("National League");
        }

        QTableWidgetItem *link            = new QTableWidgetItem(query.value(8).toString());

        int j = ui->tableWidget->rowCount();

        ui->tableWidget->insertRow(j);
        ui->tableWidget->setItem(j,0,stadiumName);
        ui->tableWidget->setItem(j,1,stadiumTeamName);
        ui->tableWidget->setItem(j,2,address);
        ui->tableWidget->setItem(j,3,phoneNumber);
        ui->tableWidget->setItem(j,4,dateOpened);
        ui->tableWidget->setItem(j,5,population);
        ui->tableWidget->setItem(j,6,league);
        ui->tableWidget->setItem(j,7,link);
        ui->tableWidget->setSortingEnabled(true);
    }

}
