#include "displayusercartitems.h"
#include "ui_displayusercartitems.h"

DisplayUserCartItems::DisplayUserCartItems(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplayUserCartItems)
{
    ui->setupUi(this);

    query.exec("SELECT `itemID`, `teamName`, `total` FROM `souvenirCart` WHERE userID = \"" + id + "\" ORDER BY id ASC;");
    while(query.next())
    {
        QString itemName;
        subQuery.exec("SELECT `name` FROM `souvenirItems` WHERE id = \"" + query.value(0).toString() + "\" LIMIT 1;");
        while(subQuery.next())
        {
            itemName = subQuery.value(0).toString();
        }


        QString teamName  = query.value(1).toString();
        QString price = query.value(2).toString();
        QTableWidgetItem *iName = new QTableWidgetItem(itemName);
        QTableWidgetItem *iTName     = new QTableWidgetItem(teamName);
        QTableWidgetItem *iTotal            = new QTableWidgetItem(price);


        int j = ui->tableWidget->rowCount();

        ui->tableWidget->insertRow(j);
        ui->tableWidget->setItem(j,0,iName);
        ui->tableWidget->setItem(j,1,iTName);
        ui->tableWidget->setItem(j,2,iTotal);


        ui->tableWidget->setSortingEnabled(true);
    }


}

DisplayUserCartItems::~DisplayUserCartItems()
{
    delete ui;
}
