#include "nonuserinterface_ui.h"
#include "mainwindow.h"
#include "ui_nonuserinterface_ui.h"
#include "createuserwindow.h"
#include "outputlistwindow.h"
#include <QMovie>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QDebug>

NonUserInterface_UI::NonUserInterface_UI(QWidget *parent) :QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::NonUserInterface_UI)
{
    ui->setupUi(this);
    openLoginBox = new MainWindow();

    openLoginBox->hide();
    ui->NonUserInterface_WebView->close();
}

NonUserInterface_UI::~NonUserInterface_UI()
{
    delete ui;
}

void NonUserInterface_UI::on_NonUserInterface_UI_Map_BTN_clicked()
{
//    QMovie *movie = new QMovie("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/LeftSidePNGNonuserInterface/Animations/LeftSideNonUserInterface_Search_to_Maps.wav");
//    ui->NonUserInterface_MidboxContent_UI_LBL->setMovie(movie);

//    movie->start();

    //Leftside Label-update.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface_Map.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    //Hotbar Label-update CLEAR.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_CLEAR.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.

    QString link="https://www.google.com/maps/preview";
    ui->NonUserInterface_WebView->show();
    ui->NonUserInterface_WebView->load(link);
}

void NonUserInterface_UI::on_NonUserInterface_UI_Weather_BTN_clicked()
{
    //Leftside Label-update.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface_Weather.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    //Hotbar Label-update CLEAR.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_CLEAR.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.

    QString link="www.accuweather.com";
    ui->NonUserInterface_WebView->show();
    ui->NonUserInterface_WebView->load(link);
}

void NonUserInterface_UI::on_NonUserInterface_UI_MLBNews_BTN_clicked()
{
    //Leftside Label-update.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface_MLBNews.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    //Hotbar Label-update CLEAR.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_CLEAR.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.

    QString link="http://mlb.mlb.com/home";
    ui->NonUserInterface_WebView->show();
    ui->NonUserInterface_WebView->load(link);
}

void NonUserInterface_UI::on_NonUserInterface_UI_Search_BTN_clicked()
{
    //Leftside Label-update.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonUser_Search.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    //Hotbar Label-update CLEAR.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_CLEAR.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.

    OutputListWindow *displayStadiums;
    displayStadiums = new OutputListWindow();
    displayStadiums->show();
}


/* HOTBAR */

void NonUserInterface_UI::on_NonUserInterface_Home_BTN_clicked()
{
    ui->NonUserInterface_WebView->close();

    //Hotbar Label-update.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_Home.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.

    //Leftside Label-update CLEAR.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.
}

void NonUserInterface_UI::on_NonUserInterface_About_Us_BTN_clicked()
{
    ui->NonUserInterface_WebView->close();

    //Hotbar Label-update.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_About_us.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.


    //Leftside Label-update CLEAR.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.
}

void NonUserInterface_UI::on_NonUserInterface_Services_BTN_clicked()
{
    ui->NonUserInterface_WebView->close();

    //Hotbar Label-update.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_Services.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.


    //Leftside Label-update CLEAR.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.
}

void NonUserInterface_UI::on_NonUserInterface_Tutorial_BTN_clicked()
{
    ui->NonUserInterface_WebView->close();

    //Hotbar Label-update.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_Tutorial.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.


    //Leftside Label-update CLEAR.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("C:/Users/Shawn/Desktop/CS1D/CS1D/Project Application/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.
}


/* LOGINBARHOTBAR */


void NonUserInterface_UI::on_NonUserInterface_Login_BTN_clicked()
{
    QMutex mut;

    if(!openLoginBox)
    {
        qDebug() <<"Inside ";
        openLoginBox->close();
        openLoginBox->show();

    }
    else
    {
        openLoginBox->close();

        mut.lock();
        mut.tryLock(120);
        mut.unlock();

        openLoginBox = new MainWindow();
        openLoginBox->show();
        qDebug() <<"Inside Visible ";
    }
}

void NonUserInterface_UI::on_NonUserInterface_Register_BTN_clicked()
{
    CreateUserWindow *openRegisterBox;
    openRegisterBox = new CreateUserWindow();
    openRegisterBox->show();
}
