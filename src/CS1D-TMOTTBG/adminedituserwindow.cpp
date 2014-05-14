#include "adminedituserwindow.h"
#include "admineditselecteduserwindow.h"
#include "ui_adminedituserwindow.h"
#include <QStringList>
#include <QString>
#include <QDebug>

AdminEditUserWindow::AdminEditUserWindow(QWidget *parent) :
    QMainWindow(parent, Qt::FramelessWindowHint),
    ui(new Ui::AdminEditUserWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    query.exec("SELECT id, username, firstName, lastName FROM users ORDER BY id ASC");
    while(query.next())
    {
       ui->comboBox->addItem(query.value(0).toString() + " | UserName: " + query.value(1).toString() + " | First Name: " + query.value(2).toString() + " | Last Name: " + query.value(3).toString());
    }

    int x = 580 ; // whatever
    int y = 250 ; // whatever

    move (x, y) ;
}

AdminEditUserWindow::~AdminEditUserWindow()
{
    delete ui;
}

void AdminEditUserWindow::on_pushButton_clicked()
{
    QStringList pieces = ui->comboBox->currentText().split(" |");
    QString editID = pieces.value( 0 );

    AdminEditSelectedUserWindow *ptr;
    ptr = new AdminEditSelectedUserWindow(editID);
    ptr->show();

}

void AdminEditUserWindow::on_AdminEditUserWindow_EXIT_BTN_clicked()
{
    this->hide();
}
