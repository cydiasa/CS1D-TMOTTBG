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

void AdminEditOutputList::on_pushButton_clicked()
{
    QStringList pieces = ui->comboBox->currentText().split(" |");
    QString editID = pieces.value( 0 );

    AdminEditSelectedOutputList *ptr;
    ptr = new AdminEditSelectedOutputList(editID);
    ptr->show();
}
