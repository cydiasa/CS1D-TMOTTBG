#include "admineditoutputlist.h"
#include "admineditselectedoutputlist.h"
#include "ui_admineditoutputlist.h"

#include <QMutex>

AdminEditOutputList::AdminEditOutputList(QWidget *parent) :
    QMainWindow(parent, Qt::FramelessWindowHint),
    ui(new Ui::AdminEditOutputList)
{
    ui->setupUi(this);

    QStringList pieces = ui->comboBox->currentText().split(" |");
    QString editID = pieces.value( 0 );

    ptr = new AdminEditSelectedOutputList(editID);

    setAttribute(Qt::WA_DeleteOnClose);
    query.exec("SELECT `id`, `stadiumName` FROM `stadiums` ORDER BY stadiumName ASC");
    while(query.next())
    {
       ui->comboBox->addItem(query.value(0).toString() + " | Stadium Name: " + query.value(1).toString());
    }

    int x = 580 ; // whatever
    int y = 250 ; // whatever

    move (x, y) ;
}

AdminEditOutputList::~AdminEditOutputList()
{
    delete ui;
}

void AdminEditOutputList::on_pushButton_clicked()
{
    QStringList pieces = ui->comboBox->currentText().split(" |");
    QString editID = pieces.value( 0 );

    QMutex mut;

    if(!ptr)
    {
        ptr = new AdminEditSelectedOutputList(editID);
        ptr->show();

    }
    else
    {
        ptr->close();

        mut.lock();
        mut.tryLock(120);
        mut.unlock();

        ptr = new AdminEditSelectedOutputList(editID);
        ptr->show();
    }
}

void AdminEditOutputList::on_AdminEditOutputList_EXIT_BTN_clicked()
{
    this->hide();
}
