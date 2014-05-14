#include "dashboardadminwindow.h"
#include "ui_dashboardadminwindow.h"
#include "outputlistwindow.h"
#include "admineditoutputlist.h"
#include "createuserwindow.h"
#include "adminedituserwindow.h"
#include "displayvacationplannerwindow.h"
#include "nonuserinterface_ui.h"

DashBoardAdminWindow::DashBoardAdminWindow(QWidget *parent) :
    QMainWindow(parent, Qt::FramelessWindowHint),
    ui(new Ui::DashBoardAdminWindow)
{

    ui->setupUi(this);

    //NEW OBJECT POINTER CONTROLLER
    ptrCreateUserWindow             = new CreateUserWindow();
    ptrDashBoardAdminWindow         = new AdminEditUserWindow();
    ptrAdminEditOutputList          = new AdminEditOutputList();
    ptrOutputListWindow             = new OutputListWindow();
    ptrDisplayVacationPlannerWindow = new DisplayVacationPlannerWindow();
    ptrCreateStadiumWindow          = new CreateStadiumWindow();

    //OBJECT HIDE FOR PRE-START.
    ui->pushButton->hide();
    ui->pushButton_3->hide();
    ui->Admin_EditUser_LBL->hide();
    ui->Admin_WebView->hide();
    ptrCreateStadiumWindow->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();
    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

//    setAttribute(Qt::WA_DeleteOnClose);
}

DashBoardAdminWindow::~DashBoardAdminWindow()
{
    delete ui;
}

void DashBoardAdminWindow::on_pushButton_2_clicked()
{
    //Leftside Label-update.
    ui->Admin_Leftside_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/Project Application/User Interface/LeftSidePNG_Admin/LeftSide_Admin.png_Search.png", 0, Qt::AutoColor));
    ui->Admin_Leftside_LBL->update(); //Updates the current label
    ui->Admin_Leftside_LBL->show();   //Displays the updated label.

    QMutex mut;

    if(!ptrOutputListWindow)
    {
        ptrOutputListWindow = new OutputListWindow();
        ptrOutputListWindow->show();

    }
    else
    {
        ptrOutputListWindow->close();

        mut.lock();
        mut.tryLock(120);
        mut.unlock();

        ptrOutputListWindow = new OutputListWindow();
        ptrOutputListWindow->show();
    }

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();


    ptrCreateUserWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrDisplayVacationPlannerWindow->hide();
    ui->Admin_WebView->close();
}


void DashBoardAdminWindow::on_pushButton_clicked()
{

    QMutex mut;

    if(!ptrCreateUserWindow)
    {
        ptrCreateUserWindow = new CreateUserWindow();
        ptrCreateUserWindow->show();

    }
    else
    {
        ptrCreateUserWindow->close();

        mut.lock();
        mut.tryLock(120);
        mut.unlock();

        ptrCreateUserWindow = new CreateUserWindow();
        ptrCreateUserWindow->show();
    }

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

    ptrOutputListWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrDisplayVacationPlannerWindow->hide();
    ui->Admin_WebView->close();
}

void DashBoardAdminWindow::on_pushButton_3_clicked()
{

    QMutex mut;

    if(!ptrDashBoardAdminWindow)
    {
        ptrDashBoardAdminWindow = new AdminEditUserWindow();
        ptrDashBoardAdminWindow->show();

    }
    else
    {
        ptrDashBoardAdminWindow->close();

        mut.lock();
        mut.tryLock(120);
        mut.unlock();

        ptrDashBoardAdminWindow = new AdminEditUserWindow();
        ptrDashBoardAdminWindow->show();
    }

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

    ptrOutputListWindow->hide();
    ptrCreateUserWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrDisplayVacationPlannerWindow->hide();
    ui->Admin_WebView->close();
}

void DashBoardAdminWindow::on_editListButton_clicked()
{
    //Leftside Label-update.
    ui->Admin_Leftside_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/Project Application/User Interface/LeftSidePNG_Admin/LeftSide_Admin_Stadiums.png", 0, Qt::AutoColor));
    ui->Admin_Leftside_LBL->update(); //Updates the current label
    ui->Admin_Leftside_LBL->show();   //Displays the updated label.

    ptrAdminEditOutputList = new AdminEditOutputList();

    QMutex mut;

    if(!ptrAdminEditOutputList)
    {
        ptrAdminEditOutputList = new AdminEditOutputList();
        ptrAdminEditOutputList->show();

    }
    else
    {
        ptrAdminEditOutputList->close();

        mut.lock();
        mut.tryLock(120);
        mut.unlock();

        ptrAdminEditOutputList = new AdminEditOutputList();
        ptrAdminEditOutputList->show();
    }

    ptrOutputListWindow->hide();
    ptrCreateUserWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrDisplayVacationPlannerWindow->hide();

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

    ui->pushButton->hide();
    ui->pushButton_3->hide();
    ui->Admin_EditUser_LBL->hide();
    ui->Admin_WebView->close();
}

void DashBoardAdminWindow::on_editListButton_2_clicked()
{
    //Leftside Label-update.
    ui->Admin_Leftside_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/Project Application/User Interface/LeftSidePNG_Admin/LeftSide_Admin_Trip.png", 0, Qt::AutoColor));
    ui->Admin_Leftside_LBL->update(); //Updates the current label
    ui->Admin_Leftside_LBL->show();   //Displays the updated label.

    ui->pushButton->hide();
    ui->pushButton_3->hide();
    ui->Admin_EditUser_LBL->hide();
    ui->Admin_WebView->close();

    QMutex mut;

    if(!ptrDisplayVacationPlannerWindow)
    {
        ptrDisplayVacationPlannerWindow = new DisplayVacationPlannerWindow();
        ptrDisplayVacationPlannerWindow->show();

    }
    else
    {
        ptrDisplayVacationPlannerWindow->close();

        mut.lock();
        mut.tryLock(120);
        mut.unlock();

        ptrDisplayVacationPlannerWindow = new DisplayVacationPlannerWindow();
        ptrDisplayVacationPlannerWindow->show();
    }

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

    ptrOutputListWindow->hide();
    ptrCreateUserWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();


}

void DashBoardAdminWindow::on_Admin_MLBNews_BTN_clicked()
{
    //Leftside Label-update.
    ui->Admin_Leftside_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/Project Application/User Interface/LeftSidePNG_Admin/LeftSide_Admin_MLBNews.png", 0, Qt::AutoColor));
    ui->Admin_Leftside_LBL->update(); //Updates the current label
    ui->Admin_Leftside_LBL->show();   //Displays the updated label.

    ui->pushButton->hide();
    ui->pushButton_3->hide();
    ui->Admin_EditUser_LBL->hide();

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

    ptrCreateUserWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrOutputListWindow->hide();
    ptrDisplayVacationPlannerWindow->hide();

    QString link="http://mlb.mlb.com/home";
    ui->Admin_WebView->show();
    ui->Admin_WebView->load(link);
}

void DashBoardAdminWindow::on_Admin_Map_BTN_clicked()
{
    //Leftside Label-update.
    ui->Admin_Leftside_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/Project Application/User Interface/LeftSidePNG_Admin/LeftSide_Admin_Map.png", 0, Qt::AutoColor));
    ui->Admin_Leftside_LBL->update(); //Updates the current label
    ui->Admin_Leftside_LBL->show();   //Displays the updated label.

    ui->pushButton->hide();
    ui->pushButton_3->hide();
    ui->Admin_EditUser_LBL->hide();

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

    ptrCreateUserWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrOutputListWindow->hide();
    ptrDisplayVacationPlannerWindow->hide();

    QString link="https://www.google.com/maps/preview";
    ui->Admin_WebView->show();
    ui->Admin_WebView->load(link);
}

void DashBoardAdminWindow::on_Admin_Weather_BTN_clicked()
{
    //Leftside Label-update.
    ui->Admin_Leftside_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/Project Application/User Interface/LeftSidePNG_Admin/LeftSide_Admin_Weather.png", 0, Qt::AutoColor));
    ui->Admin_Leftside_LBL->update(); //Updates the current label
    ui->Admin_Leftside_LBL->show();   //Displays the updated label.

    ui->pushButton->hide();
    ui->pushButton_3->hide();
    ui->Admin_EditUser_LBL->hide();

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

    ptrCreateUserWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrOutputListWindow->hide();
    ptrDisplayVacationPlannerWindow->hide();

    QString link="www.accuweather.com";
    ui->Admin_WebView->show();
    ui->Admin_WebView->load(link);
}

void DashBoardAdminWindow::on_Admin_Shop_BTN_clicked()
{
    //Leftside Label-update.
    ui->Admin_Leftside_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/Project Application/User Interface/LeftSidePNG_Admin/LeftSide_Admin_Shop.png", 0, Qt::AutoColor));
    ui->Admin_Leftside_LBL->update(); //Updates the current label
    ui->Admin_Leftside_LBL->show();   //Displays the updated label.

    ui->pushButton->hide();
    ui->pushButton_3->hide();
    ui->Admin_EditUser_LBL->hide();
    ui->Admin_WebView->close();

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

    ptrCreateUserWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrOutputListWindow->hide();
    ptrDisplayVacationPlannerWindow->hide();

    //COMING SOON!
}

void DashBoardAdminWindow::on_Admin_Tutorial_BTN_clicked()
{
    //Leftside Label-update.
    ui->Admin_Leftside_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/Project Application/User Interface/LeftSidePNG_Admin/LeftSide_Admin_Tutorial.png", 0, Qt::AutoColor));
    ui->Admin_Leftside_LBL->update(); //Updates the current label
    ui->Admin_Leftside_LBL->show();   //Displays the updated label.

    ui->pushButton->hide();
    ui->pushButton_3->hide();
    ui->Admin_EditUser_LBL->hide();
    ui->Admin_WebView->close();

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

    ptrCreateUserWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrOutputListWindow->hide();
    ptrDisplayVacationPlannerWindow->hide();

    //COMING SOON!
}

void DashBoardAdminWindow::on_Admin_EditUser_BTN_clicked()
{
    //Leftside Label-update.
    ui->Admin_Leftside_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/Project Application/User Interface/LeftSidePNG_Admin/LeftSide_Admin_Users.png", 0, Qt::AutoColor));
    ui->Admin_Leftside_LBL->update(); //Updates the current label
    ui->Admin_Leftside_LBL->show();   //Displays the updated label.

    ui->pushButton->show();
    ui->pushButton_3->show();
    ui->Admin_EditUser_LBL->show();

    ui->Admin_WebView->close();

    ui->Admin_CreateStadiums_BTN->hide();
    ui->editListButton->hide();
    ui->Admin_Stadium_LBL->hide();

    ptrCreateStadiumWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrOutputListWindow->hide();
    ptrDisplayVacationPlannerWindow->hide();
}

void DashBoardAdminWindow::on_Admin_Stadium_OPEN_BTN_clicked()
{
    ui->Admin_CreateStadiums_BTN->show();
    ui->editListButton->show();
    ui->Admin_Stadium_LBL->show();

    ui->Admin_WebView->close();

    ui->pushButton->hide();
    ui->pushButton_3->hide();
    ui->Admin_EditUser_LBL->hide();

    ptrCreateUserWindow->hide();
    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrOutputListWindow->hide();
    ptrDisplayVacationPlannerWindow->hide();
}

void DashBoardAdminWindow::on_Admin_CreateStadiums_BTN_clicked()
{

    //TEST DO NOT FORGET SIR!

    QMutex mut;

    if(!ptrCreateStadiumWindow)
    {
        ptrCreateStadiumWindow = new CreateStadiumWindow();
        ptrCreateStadiumWindow->show();

    }
    else
    {
        ptrCreateStadiumWindow->close();

        mut.lock();
        mut.tryLock(120);
        mut.unlock();

        ptrCreateStadiumWindow = new CreateStadiumWindow();
        ptrCreateStadiumWindow->show();
    }

    ui->pushButton->hide();
    ui->pushButton_3->hide();
    ui->Admin_EditUser_LBL->hide();

    ptrDashBoardAdminWindow->hide();
    ptrAdminEditOutputList->hide();
    ptrOutputListWindow->hide();
    ptrDisplayVacationPlannerWindow->hide();
}

