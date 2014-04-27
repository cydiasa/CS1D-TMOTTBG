#include "createuserwindow.h"
#include "ui_createuserwindow.h"
#include "QDebug"

CreateUserWindow::CreateUserWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateUserWindow)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_DeleteOnClose);
    ui->errorOutputLabel->setText("");
    ui->zipCodeInputBox->setMaxLength(5);
    ui->cellPhoneInputBox->setMaxLength(10);

    countryComboBox = ui->countrySelectionBox;
    cellPhoneProvidor = ui->cellProvidorSelectionBox;

    // Country list
    query.exec("SELECT countryName FROM countryList ORDER BY priority DESC, countryName ASC");
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

void CreateUserWindow::on_resetButton_clicked()
{
    ui->firstNameInputBox->setText("");
    ui->lastNameInputBox->setText("");
    ui->emailInputBox->setText("");
    ui->usernameInputBox->setText("");
    ui->passwordInputBox->setText("");
    ui->addressInputBox->setText("");
    ui->zipCodeInputBox->setText("");
    ui->cityInputBox->setText("");
    ui->cellPhoneInputBox->setText("");
}

void CreateUserWindow::on_createButton_clicked()
{
    QSqlQuery query;
    QString firstName         = ui->firstNameInputBox->text();
    QString lastName          = ui->lastNameInputBox->text();
    QString email             = ui->emailInputBox->text();
    QString username          = ui->usernameInputBox->text();
    QString password          = ui->passwordInputBox->text();
    QString address           = ui->addressInputBox->text();
    QString zipCode           = ui->zipCodeInputBox->text();
    QString city              = ui->cityInputBox->text();
    QString country           = ui->countrySelectionBox->currentText();
    QString cellPhoneNumber   = ui->cellPhoneInputBox->text();
    QString cellPhoneProvider = ui->cellProvidorSelectionBox->currentText();

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
    else if(password.isEmpty())
    {
        ui->errorOutputLabel->setText("Invalid input for password");
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
        if(query.exec("SELECT username, email FROM users WHERE username = '" + username +"' OR email = '" + email + "'"))
        {
            if(query.next())
            {
                ui->errorOutputLabel->setText("Email or Username already exists - Try another");
            }
            else
            {
                query.prepare("INSERT INTO users ( firstName, lastName, username, email, password, address, city, zipCode, country, cellPhone, cellPhoneProvider, dateCreated) VALUES (:firstName, :lastName, :email, :username, MD5(:password), :address, :city, :zipCode, :country, :cellPhone, :cellPhoneProvider, NOW())");
                query.bindValue(":firstName",firstName);
                query.bindValue(":lastName",lastName);
                query.bindValue(":email",email);
                query.bindValue(":username",username);
                query.bindValue(":password", password);
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

}

void CreateUserWindow::on_cancelButton_clicked()
{
    this->close();
}
