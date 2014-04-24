#include "createuserwindow.h"
#include "ui_createuserwindow.h"
#include "QDebug"

CreateUserWindow::CreateUserWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateUserWindow)
{
    ui->setupUi(this);


    countryComboBox = ui->countrySelectionBox;
    cellPhoneProvidor = ui->cellProvidorSelectionBox;

    // Country list
    query.exec("SELECT countryName FROM countryList ORDER BY priority AND name DESC");
    while(query.next())
    {
        countryComboBox->addItem(query.value(0).toString());
    }



    // Cell Providor List
    query.exec("SELECT name FROM cellProvider ORDER BY name ASC");
    while(query.next())
    {
        cellPhoneProvidor->addItem(query.value(0).toString());
    }

}

CreateUserWindow::~CreateUserWindow()
{
    delete ui;
}

void CreateUserWindow::on_pushButton_clicked()
{

    ui->firstNameInputBox->setText("");
    ui->lastNameInputBox->setText("");
    ui->emailInputBox->setText("");
    ui->usernameInputBox->setText("");
    ui->passwordInputBox->setText("");
    ui->addressInputBox->setText("");
    ui->zipCodeInputBox->setText("");
    ui->cityInputBox->setText("");
    //ui->countrySelectionBox->setText("");
    ui->cellPhoneInputBox->setText("");
    //ui->cellProvidorSelectionBox->setText("");

}
