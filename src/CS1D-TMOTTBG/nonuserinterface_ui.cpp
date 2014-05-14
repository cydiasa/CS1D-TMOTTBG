#include "nonuserinterface_ui.h"
#include "mainwindow.h"
#include "ui_nonuserinterface_ui.h"
#include "createuserwindow.h"
#include "outputlistwindow.h"
#include <QMovie>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>

NonUserInterface_UI::NonUserInterface_UI(QWidget *parent) :QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::NonUserInterface_UI)
{
    ui->setupUi(this);

    // Create Connection to MYSQL
    if(!database.open())
    {
        database = QSqlDatabase::addDatabase("QMYSQL3");
        database.setConnectOptions();
        database.setHostName("h.cydiasolutions.com");
        database.setPort(19996);
        database.setDatabaseName("cs1d");
        database.setUserName("cs1d");
        database.setPassword("Cydia7x7");
    }

    QMovie *movie = new QMovie("C:/Users/Shawn/Desktop/CS1D/Project Interface/Images/MiddlePart/MiddlePartGIF.gif");
    ui->NonUserInterface_UI_MidLabel_LBL->setMovie(movie);
    movie->start();

    openLoginBox    = new MainWindow();
    openRegiBox     = new CreateUserWindow();
    displayStadiums = new OutputListWindow();

    /* Hides the External-related windows */
    openLoginBox->hide(); //Login Window is hidden.
    displayStadiums->hide(); //Stadium search window is hidden.
    ui->NonUserInterface_WebView->hide(); //Webview is hidden.
}

NonUserInterface_UI::~NonUserInterface_UI()
{
    delete ui;
}

void NonUserInterface_UI::on_NonUserInterface_UI_Map_BTN_clicked()
{
    //Leftside Label-update.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface_Map.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    //Hotbar Label-update CLEAR.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_CLEAR.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.

    QString link="https://www.google.com/maps/preview";
    ui->NonUserInterface_WebView->show();
    ui->NonUserInterface_WebView->load(link);

    ui->NonUserInterface_UI_MidLabel_LBL->hide();

    if(displayStadiums->isEnabled())
    {
        displayStadiums->hide();
    }
}

void NonUserInterface_UI::on_NonUserInterface_UI_Weather_BTN_clicked()
{
    //Leftside Label-update.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface_Weather.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    //Hotbar Label-update CLEAR.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_CLEAR.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.

    QString link="www.accuweather.com";
    ui->NonUserInterface_WebView->show();
    ui->NonUserInterface_WebView->load(link);

    ui->NonUserInterface_UI_MidLabel_LBL->hide();

    if(displayStadiums->isEnabled())
    {
        displayStadiums->hide();
    }
}

void NonUserInterface_UI::on_NonUserInterface_UI_MLBNews_BTN_clicked()
{
    //Leftside Label-update.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface_MLBNews.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    //Hotbar Label-update CLEAR.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_CLEAR.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.

    QString link="http://mlb.mlb.com/home";
    ui->NonUserInterface_WebView->show();
    ui->NonUserInterface_WebView->load(link);

    ui->NonUserInterface_UI_MidLabel_LBL->hide();

    if(displayStadiums->isEnabled())
    {
        displayStadiums->hide();
    }
}

void NonUserInterface_UI::on_NonUserInterface_UI_Search_BTN_clicked()
{
    //Leftside Label-update.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonUser_Search.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    //Hotbar Label-update CLEAR.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_CLEAR.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.

    ui->NonUserInterface_UI_MidLabel_LBL->hide();

    QMutex mut;

    if(!displayStadiums)
    {
        displayStadiums = new OutputListWindow();
        displayStadiums->show();

    }
    else
    {
        displayStadiums->close();

        mut.lock();
        mut.tryLock(120);
        mut.unlock();

        displayStadiums = new OutputListWindow();
        displayStadiums->show();
    }
}


/* HOTBAR */

void NonUserInterface_UI::on_NonUserInterface_Home_BTN_clicked()
{
    ui->NonUserInterface_WebView->close();

    QMovie *movie = new QMovie("C:/Users/Shawn/Desktop/CS1D/Project Interface/Images/MiddlePart/MiddlePartGIF.gif");
    ui->NonUserInterface_UI_MidLabel_LBL->setMovie(movie);
    movie->start();

    //Hotbar Label-update.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_Home.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.

    //Leftside Label-update CLEAR.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    if(displayStadiums->isEnabled())
    {
        displayStadiums->hide();
    }
}

void NonUserInterface_UI::on_NonUserInterface_About_Us_BTN_clicked()
{
    ui->NonUserInterface_WebView->close();

    //Hotbar Label-update.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_About_us.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.


    //Leftside Label-update CLEAR.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    ui->NonUserInterface_UI_MidLabel_LBL->hide();

    if(displayStadiums->isEnabled())
    {
        displayStadiums->hide();
    }
}

void NonUserInterface_UI::on_NonUserInterface_Services_BTN_clicked()
{
    ui->NonUserInterface_WebView->close();

    //Hotbar Label-update.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_Services.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.


    //Leftside Label-update CLEAR.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    ui->NonUserInterface_UI_MidLabel_LBL->hide();

    if(displayStadiums->isEnabled())
    {
        displayStadiums->hide();
    }
}

void NonUserInterface_UI::on_NonUserInterface_Tutorial_BTN_clicked()
{
    ui->NonUserInterface_WebView->close();

    //Hotbar Label-update.
    ui->NonUserInterface_Hotbar_UI_LBL->setPixmap(QPixmap("/Non-User Interface/HotbarPNGNonUserInterface/HotbarNonuserInterface_Tutorial.png", 0, Qt::AutoColor));
    ui->NonUserInterface_Hotbar_UI_LBL->update(); //Updates the current label
    ui->NonUserInterface_Hotbar_UI_LBL->show();   //Displays the updated label.


    //Leftside Label-update CLEAR.
    ui->LeftButtons_NonUserUI_LBL->setPixmap(QPixmap("/Non-User Interface/LeftSidePNGNonuserInterface/LeftSideNonuserInterface.png", 0, Qt::AutoColor));
    ui->LeftButtons_NonUserUI_LBL->update(); //Updates the current label
    ui->LeftButtons_NonUserUI_LBL->show();   //Displays the updated label.

    ui->NonUserInterface_UI_MidLabel_LBL->hide();

    if(displayStadiums->isEnabled())
    {
        displayStadiums->hide();
    }
}


/* LOGINBARHOTBAR */

/* Login
 *
 * Opens the Login Window*/
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
    }
}

void NonUserInterface_UI::on_NonUserInterface_Register_BTN_clicked()
{
    QMutex mut;

    if(!openRegiBox)
    {
        openRegiBox->close();
        openRegiBox->show();

    }
    else
    {
        openRegiBox->close();

        mut.lock();
        mut.tryLock(120);
        mut.unlock();

        openRegiBox = new CreateUserWindow();
        openRegiBox->show();
    }
}

void NonUserInterface_UI::on_NonUserInterface_Exit_BTN_clicked()
{
    this->close();
}
