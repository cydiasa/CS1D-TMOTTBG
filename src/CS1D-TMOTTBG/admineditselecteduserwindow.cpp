#include "admineditselecteduserwindow.h"
#include "ui_admineditselecteduserwindow.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QSql>

AdminEditSelectedUserWindow::AdminEditSelectedUserWindow(QString id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminEditSelectedUserWindow)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_DeleteOnClose);
userID = id;
    // Country list
    query.exec("SELECT countryName FROM countryList ORDER BY priority DESC, countryName ASC");
    while(query.next())
    {
        ui->countrySelectionBox->addItem(query.value(0).toString());
    }

    // Cell Providor List
    query.exec("SELECT name FROM cellProvider ORDER BY name ASC");
    while(query.next())
    {
        ui->cellProvidorSelectionBox->addItem(query.value(0).toString());
    }

    query.exec("SELECT `firstName`, `lastName`, `username`, `email`, `password`, `address`, `city`, `zipCode`, `country`, `cellPhone`, `cellPhoneProvider` FROM `users` WHERE id = '" + id + "' LIMIT 1;");

    if(query.next())
    {
        firstName = query.value(0).toString();
        lastName     = query.value(1).toString();
        username         = query.value(2).toString();
        email     = query.value(3).toString();
        address      = query.value(5).toString();
        city      = query.value(6).toString();
        zipCode      = query.value(7).toString();
        country      = query.value(8).toString();
        cellPhoneNumber = query.value(9).toString();
        cellPhoneProvider = query.value(10).toString();

        ui->firstNameInputBox->setText(firstName);
        ui->lastNameInputBox->setText(lastName);
        ui->emailInputBox->setText(email);
        ui->usernameInputBox->setText(username);
        ui->addressInputBox->setText(address);
        ui->zipCodeInputBox->setText(zipCode);
        ui->cityInputBox->setText(city);
        ui->cellPhoneInputBox->setText(cellPhoneNumber);

        ui->countrySelectionBox->setCurrentText(country);
        ui->cellProvidorSelectionBox->setCurrentText(cellPhoneProvider);
    }



    //ui->countrySelectionBox->currentText();
//    ui->cellPhoneInputBox->setText();

    //ui->cellProvidorSelectionBox->currentText();
}

AdminEditSelectedUserWindow::~AdminEditSelectedUserWindow()
{
    delete ui;
}

void AdminEditSelectedUserWindow::on_createButton_clicked()
{
    QSqlQuery query;
    firstName         = ui->firstNameInputBox->text();
    lastName          = ui->lastNameInputBox->text();
    email             = ui->emailInputBox->text();
    username          = ui->usernameInputBox->text();
    password          = ui->passwordInputBox->text();
    address           = ui->addressInputBox->text();
    zipCode           = ui->zipCodeInputBox->text();
    city              = ui->cityInputBox->text();
    country           = ui->countrySelectionBox->currentText();
    cellPhoneNumber   = ui->cellPhoneInputBox->text();
    cellPhoneProvider = ui->cellProvidorSelectionBox->currentText();

    // Regular Expression
    // Checks for 5 digits
    // digits[min 5 - max 5]
    QRegExp zipCodeRegEx("^\\d{5}$");
    // Checks for 10 Digits
    // digits[min 10 - max 10]
    QRegExp phoneNumberRegEx("^\\d{10}$");
    // Check for a valid Email
    // anything[min 1]@anything[min 1].anything[min 2]
    QRegExp emailRegEx("[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+\.[a-zA-Z]{2,4}");

    if(firstName.isEmpty())
    {
        ui->errorOutputLabel->setText("Invalid input for first name");
    }
    else if(lastName.isEmpty())
    {
        ui->errorOutputLabel->setText("Invalid input for last name");
    }
    else if(email.isEmpty() || !( emailRegEx.exactMatch(email)))
    {
        ui->errorOutputLabel->setText("Invalid input for email");
    }
    else if(username.isEmpty())
    {
        ui->errorOutputLabel->setText("Invalid input for username");
    }
    else if(address.isEmpty())
    {
        ui->errorOutputLabel->setText("Invalid input for address");
    }
    else if(zipCode.isEmpty() || !( zipCodeRegEx.exactMatch(zipCode)))
    {
        ui->errorOutputLabel->setText("Invalid input for zip code - 5 Digit Numbers Only");
    }
    else if(city.isEmpty())
    {
        ui->errorOutputLabel->setText("Invalid input for city");
    }
    else if(country.isEmpty())
    {
        ui->errorOutputLabel->setText("Invalid input for country");
    }
    else if(cellPhoneNumber.isEmpty() || !( phoneNumberRegEx.exactMatch(cellPhoneNumber)))
    {
        ui->errorOutputLabel->setText("Invalid input for cell phone number - 10 Digit Numbers Only");
    }
    else if(cellPhoneProvider.isEmpty())
    {
        ui->errorOutputLabel->setText("Invalid input for cell phone provider");
    }
    else
    {
        if(query.next())
        {
            ui->errorOutputLabel->setText("Email or Username already exists - Try another");
        }
        else if(password.isEmpty())
        {
            qDebug() << "meow";
            query.prepare("UPDATE `users` SET `firstName`=:firstName ,`lastName`=:lastName ,`username`=:username ,`email`=:email ,`address`=:address ,`city`=:city ,`zipCode`=:zipCode ,`country`=:country ,`cellPhone`=:cellPhone ,`cellPhoneProvider`=:cellPhoneProvider ,`dateCreated`=NOW() WHERE id=" + userID);

            query.bindValue(":firstName",firstName);
            query.bindValue(":lastName",lastName);
            query.bindValue(":email",email);
            query.bindValue(":username",username);
            query.bindValue(":address",address);
            query.bindValue(":city",city);
            query.bindValue(":zipCode",zipCode);
            query.bindValue(":country",country);
            query.bindValue(":cellPhone",cellPhoneNumber);
            query.bindValue(":cellPhoneProvider",cellPhoneProvider);

            query.exec();
            this->close();
        }
        else
        {
            qDebug() << "meow2";
            query.prepare("UPDATE `users` SET `firstName`=:firstName ,`lastName`=:lastName ,`username`=:username ,`email`=:email, `password`=MD5(:password), `address`=:address ,`city`=:city ,`zipCode`=:zipCode ,`country`=:country ,`cellPhone`=:cellPhone ,`cellPhoneProvider`=:cellPhoneProvider ,`dateCreated`=NOW() WHERE id=" + userID);

            query.bindValue(":firstName",firstName);
            query.bindValue(":lastName",lastName);
            query.bindValue(":email",email);
            query.bindValue(":username",username);
            query.bindValue(":password",password);
            query.bindValue(":address",address);
            query.bindValue(":city",city);
            query.bindValue(":zipCode",zipCode);
            query.bindValue(":country",country);
            query.bindValue(":cellPhone",cellPhoneNumber);
            query.bindValue(":cellPhoneProvider",cellPhoneProvider);
            query.exec();
            this->close();
        }

    }
}

void AdminEditSelectedUserWindow::on_cancelButton_clicked()
{
    this->close();
}


void AdminEditSelectedUserWindow::on_resetButton_clicked()
{
    ui->firstNameInputBox->setText(firstName);
    ui->lastNameInputBox->setText(lastName);
    ui->emailInputBox->setText(email);
    ui->usernameInputBox->setText(username);
    ui->addressInputBox->setText(address);
    ui->zipCodeInputBox->setText(zipCode);
    ui->cityInputBox->setText(city);
    ui->cellPhoneInputBox->setText(cellPhoneNumber);
}

void AdminEditSelectedUserWindow::on_deleteButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirm Deletion from Database, Cannot be undone");
     QPushButton *connectButton = msgBox.addButton(tr("Confirm Delete"), QMessageBox::ActionRole);
     QPushButton *abortButton = msgBox.addButton(QMessageBox::Abort);

     msgBox.exec();

     if (msgBox.clickedButton() == connectButton) {
         query.prepare("DELETE from `users` WHERE id=" + userID + " LIMIT 1;");
         query.exec();
         this->close();
     }
}
