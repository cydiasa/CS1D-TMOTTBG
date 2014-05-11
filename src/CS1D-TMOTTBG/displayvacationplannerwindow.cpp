#include "displayvacationplannerwindow.h"
#include "ui_displayvacationplannerwindow.h"
#include "displayvacationcheckedpathwindow.h"

#include <QWidget>
#include <QDebug>
#include <QPushButton>
#include <QFormLayout>
#include <QCheckBox>
#include <QComboBox>

DisplayVacationPlannerWindow::DisplayVacationPlannerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplayVacationPlannerWindow)
{
    ui->setupUi(this);

    startingLocation = new QComboBox();

    setAttribute(Qt::WA_DeleteOnClose);
    layout = new QFormLayout;
    checkBox.clear();

    query.exec("SELECT `stadiumTeamName`, `stadiumName` FROM `stadiums` ORDER BY stadiumTeamName ASC");
    while(query.next())
    {
        QString startingLocationText = query.value(0).toString() + ", " + query.value(1).toString();
        startingLocation->addItem(startingLocationText);
    }


    layout->addRow(startingLocation);
    query.exec("SELECT `stadiumTeamName`, `stadiumName` FROM `stadiums` ORDER BY stadiumTeamName ASC");
    while(query.next())
    {
        QString labelText = query.value(0).toString() + ", " + query.value(1).toString();
        checkBox.append(new QCheckBox(labelText));
    }

    QList<QCheckBox* >::iterator i;
    for (int i = 0; i < checkBox.count(); ++i)
    {
         layout->addRow(checkBox.at(i));
    }
    this->setLayout(layout);
}

DisplayVacationPlannerWindow::~DisplayVacationPlannerWindow()
{
    delete ui;
}

void DisplayVacationPlannerWindow::on_pushButton_clicked()
{
    for (int i =0; i < checkBox.count(); i++)
    {
       if(checkBox.at(i)->checkState() > 0)
       {
           checkedBoxes.append(checkBox.at(i)->text());
       }
    }

    displayVacationCheckedPathWindow *ptr;
    ptr = new displayVacationCheckedPathWindow(checkedBoxes, startingLocation->currentText());
    ptr->show();
}
