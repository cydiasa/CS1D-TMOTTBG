#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    database = QSqlDatabase::addDatabase("QMYSQL3");
    database.setConnectOptions();
    database.setHostName("localhost");
    database.setDatabaseName("cs1d");
    database.setUserName("root");
    database.setPassword("");

    if(!database.open())
    {
        ui->label_status->setText("Failed to connect to the Databse!");
    }
    else
    {
        ui->label_status->setText("Connected to the Database!");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username;
    QString password;
    QSqlQuery qry;
    int counter;

    //PROC - Assign input data to QStrings
    username = ui->usernameInputBox->text();
    password = ui->passwordInputBox->text();
    counter = 0;

    if(!database.isOpen())
    {
        qDebug()<<"Failed to open the database!";
    }
    else
    {
        if(qry.exec("SELECT * FROM users WHERE username = '" + username +"' and password = MD5('" + password + "')"))
        {
            //WHILE LOOP - This while loop is designed to go through
            //             the sql database to try and find the correct
            //             matching ID and password...and increment the counter
            //             for basic login correction!
            while(qry.next())
            {
                counter++;
            }

            //IF-THEN-ELSE STATEMENT - This statement is designed to check
            //                         for the correct login ID and password.
            //                         Depending on the condition, a notification
            //                         will be given out under the status msg!
            if(counter == 1)
            {
                ui->label_status->setText("Username and password is correct.");
            }
            else if(counter > 1)
            {
                ui->label_status->setText("Duplicate username and password.");
            }
            else if(counter < 1)
            {
                ui->label_status->setText("Username and password is not correct.");
            }
        }
    }


}
