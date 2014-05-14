#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include "createuserwindow.h"
#include "outputlistwindow.h"
#include "displayvacationplannerwindow.h"
#include "displayusercartitems.h"
#include "displaysouvenirwindow.h"
#include "displayusercartitems.h"
#include "displayindividualiteminformation.h"
#include "displayindividualstadiuminformationwindow.h"

DashboardWindow::DashboardWindow(QWidget *parent) :
    QMainWindow(parent, Qt::FramelessWindowHint),
    ui(new Ui::DashboardWindow)
{

    //NEW OBJECT POINTER CONTROLLER
    ptrCreateUserWindow             = new CreateUserWindow();
    ptrDashBoardAdminWindow         = new AdminEditUserWindow();
    ptrAdminEditOutputList          = new AdminEditOutputList();
    ptrOutputListWindow             = new OutputListWindow();
    ptrDisplayVacationPlannerWindow = new DisplayVacationPlannerWindow();

    ui->setupUi(this);
    ui->pushButton->hide();
    ui->UserInterface_Setting_LBL->hide();
    ui->UserInterface_QWebView->hide();

    ptrCreateUserWindow             = new CreateUserWindow();
    ptrDashBoardAdminWindow         = new AdminEditUserWindow();
    ptrAdminEditOutputList          = new AdminEditOutputList();
    ptrOutputListWindow             = new OutputListWindow();
    ptrDisplayVacationPlannerWindow = new DisplayVacationPlannerWindow();

    //OBJECT HIDE FOR PRE-START.
    ptrCreateUserWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrOutputListWindow->hide();
    ptrDisplayVacationPlannerWindow->hide();

    setAttribute(Qt::WA_DeleteOnClose);
}

DashboardWindow::~DashboardWindow()
{
    delete ui;
}

void DashboardWindow::on_pushButton_clicked()
{
    CreateUserWindow *ptr;
    ptr = new CreateUserWindow();
    ptr->show();
}

void DashboardWindow::on_pushButton_2_clicked()
{
    OutputListWindow *ptr;
    ptr = new OutputListWindow();
    ptr->show();
}

void DashboardWindow::on_UserInterface_Settings_BTN_clicked()
{
    ui->UserInterface_Setting_LBL->show();
    ui->UserInterface_Settings_BTN->show();
}

void DashboardWindow::on_UserInterface_News_BTN_clicked()
{
    QString link="http://mlb.mlb.com/home";
    ui->UserInterface_QWebView->show();
    ui->UserInterface_QWebView->load(link);
}

void DashboardWindow::on_UserInterface_Map_BTN_clicked()
{
    QString link="https://www.google.com/maps/preview";
    ui->UserInterface_QWebView->show();
    ui->UserInterface_QWebView->load(link);
}

void DashboardWindow::on_UserInterface_Weather_BTN_clicked()
{
    QString link="www.accuweather.com";
    ui->UserInterface_QWebView->show();
    ui->UserInterface_QWebView->load(link);
}

void DashboardWindow::on_UserInterface_Trip_BTN_clicked()
{
    DisplayVacationPlannerWindow *ptr;
    ptr = new DisplayVacationPlannerWindow();

    ptr->show();
}

void DashboardWindow::on_UserInterface_Shop_BTN_clicked()
{
    ui->UserInterface_ShoppingCart_LBL->show();
    ui->UserInterface_ShoppingCart_BTN->show();
    ui->UserInterface_SouveneerList_BTN->show();
}

void DashboardWindow::on_UserInterface_Tutorial_BTN_clicked()
{
    //Coming Soon
}

void DashboardWindow::on_UserInterface_SouveneerList_BTN_clicked()
{

    ptrDisplaySouvenirWindow = new DisplaySouvenirWindow();
    ptrDisplaySouvenirWindow->show();
}

void DashboardWindow::on_UserInterface_ShoppingCart_BTN_clicked()
{
    DisplayUserCartItems *ptr;
    ptr = new DisplayUserCartItems("1");
    ptr->show();
}
