#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dashboardwindow.h"
#include "dashboardadminwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create Connection to MYSQL
    database = QSqlDatabase::addDatabase("QMYSQL3");
    database.setConnectOptions();
    database.setHostName("localhost");
    database.setDatabaseName("cs1d");
    database.setUserName("root");
    database.setPassword("");

    // Check to see if were connected to the database
    if(!database.open())
    {
        ui->label_status->setText("Failed to connect to the Databse!");
    }
    // If connected let the user name
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
        qDebug()<< "Failed to open the database!";
    }
    else
    {
        if(qry.exec("SELECT username, password, admin FROM users WHERE username = '" + username +"' and password = MD5('" + password + "')"))
        {
            if(qry.next())
            {
                ui->label_status->setText("Username and password is correct.");

                if(qry.value(2).toBool() == true)
                {
                    // Switch to dashboard
                    DashBoardAdminWindow *dashboardWindow;
                    dashboardWindow = new DashBoardAdminWindow();
                    dashboardWindow->show();
                    qDebug() << "Logged in as Admin";
                }
                else
                {
                    // Switch to dashboard
                    DashboardWindow *dashboardWindow;
                    dashboardWindow = new DashboardWindow();
                    dashboardWindow->show();
                    qDebug() << "Logged in as User";
                }

            }
            else
            {
                ui->label_status->setText("Username and password is not correct.");
            }
        }
    }

}

void MainWindow::on_usernameInputBox_returnPressed()
{
    this->on_pushButton_login_clicked();
    qDebug() << "on_usernameInputBox_returnPressed";
}

void MainWindow::on_passwordInputBox_returnPressed()
{
    this->on_pushButton_login_clicked();
    qDebug() << "on_passwordInputBox_returnPressed";
}
