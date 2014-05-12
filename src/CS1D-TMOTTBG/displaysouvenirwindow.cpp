#include "displaysouvenirwindow.h"
#include "ui_displaysouvenirwindow.h"
#include <QFormLayout>
#include <QPushButton>
#include <QDebug>

DisplaySouvenirWindow::DisplaySouvenirWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplaySouvenirWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);


    ui->tableWidget->setStyleSheet("QHeaderView::section { background-color:#24282e; text-color:white; }");

    int x = 400 ; // whatever
    int y = 215 ;  // whatever

    move (x, y);

    query.exec("SELECT `id`, `name`, `description`, `price` FROM `souvenirItems` ORDER BY `name` ASC;");
    while(query.next())
    {

        QString name  = query.value(0).toString();
        QString price = query.value(1).toString();
        QString id    = query.value(2).toString();
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

//    ui->tableWidget->setColumnWidth(0,stadiumNameLength*6);
//    ui->tableWidget->setColumnWidth(1,stadiumTeamNameLength*6);
//    ui->tableWidget->setColumnWidth(2,addressLength*5.75);
//    ui->tableWidget->setColumnWidth(3,phoneNumberLength*6);
//    ui->tableWidget->setColumnWidth(4,dateOpenedLength*6);
//    ui->tableWidget->setColumnWidth(5,populationLength*5.25);
//    ui->tableWidget->setColumnWidth(6,100);
//    ui->tableWidget->setColumnWidth(7,75);
//    QFormLayout* layout = new QFormLayout;
//    buttonList.clear();

//    query.exec("SELECT `id`, `name`, `description`, `price` FROM `souvenirItems` ORDER BY `name` ASC;");
//    while(query.next())
//    {
//        QString labelText = query.value(1).toString() + " " + query.value(2).toString();
//        buttonList.append(new QPushButton(labelText));
//    }

//    QList<QPushButton* >::iterator i;
//    for (int i = 0; i < buttonList.count(); ++i)
//    {
//         layout->addRow(buttonList.at(i));
//    }

//    connect(buttonList.at(i), SIGNAL(clicked()), this, SLOT(buttonClicked(QPushButton*)));
//    this->setLayout(layout);

    connect(ui->tableWidget, SIGNAL(cellActivated(int,int)), this, SLOT(cellPopup(int)));
}

DisplaySouvenirWindow::~DisplaySouvenirWindow()
{
    delete ui;
}

void DisplaySouvenirWindow::cellPopup(int row)
{
    qDebug() << row;
//    DisplayIndividualStadiumInformationWindow *dashboardWindow;
//    dashboardWindow = new DisplayIndividualStadiumInformationWindow(ui->tableWidget->item(row, 0)->text());
//    dashboardWindow->show();
}
