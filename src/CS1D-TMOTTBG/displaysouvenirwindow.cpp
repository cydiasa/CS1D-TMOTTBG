#include "displaysouvenirwindow.h"
#include "ui_displaysouvenirwindow.h"
#include "displayindividualiteminformation.h"
#include <QFormLayout>
#include <QPushButton>
#include <QDebug>

DisplaySouvenirWindow::DisplaySouvenirWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplaySouvenirWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);


//    ui->tableWidget->setStyleSheet("QHeaderView::section { background-color:#24282e; text-color:white; }");

    int x = 400 ; // whatever
    int y = 215 ;  // whatever

    move (x, y);

    query.exec("SELECT `name`, `price`, `id` FROM `souvenirItems` ORDER BY `name` ASC;");
    while(query.next())
    {

        QString name  = query.value(0).toString();
        QString price = query.value(1).toString();
        QTableWidgetItem *itemName = new QTableWidgetItem(name);
        QTableWidgetItem *itemPrice     = new QTableWidgetItem(price);
        QTableWidgetItem *link            = new QTableWidgetItem("Click Here");


        int j = ui->tableWidget->rowCount();

        ui->tableWidget->insertRow(j);
        ui->tableWidget->setItem(j,0,itemName);
        ui->tableWidget->setItem(j,1,itemPrice);
        ui->tableWidget->setItem(j,2,link);


        ui->tableWidget->setSortingEnabled(true);
    }

    connect(ui->tableWidget, SIGNAL(cellActivated(int,int)), this, SLOT(cellPopup(int)));
}

DisplaySouvenirWindow::~DisplaySouvenirWindow()
{
    delete ui;
}

void DisplaySouvenirWindow::cellPopup(int row)
{
    qDebug() << row;

    DisplayIndividualItemInformation *dashboardWindow;
    dashboardWindow = new DisplayIndividualItemInformation(ui->tableWidget->item(row, 0)->text());
    dashboardWindow->show();
}
