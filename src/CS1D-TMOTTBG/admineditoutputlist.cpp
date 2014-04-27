#include "admineditoutputlist.h"
#include "admineditselectedoutputlist.h"
#include "ui_admineditoutputlist.h"

AdminEditOutputList::AdminEditOutputList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminEditOutputList)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    query.exec("SELECT `id`, `stadiumName` FROM `stadiums` ORDER BY stadiumName ASC");
    while(query.next())
    {
       ui->comboBox->addItem(query.value(0).toString() + " | Stadium Name: " + query.value(1).toString());
    }
}

AdminEditOutputList::~AdminEditOutputList()
{
    delete ui;
}
