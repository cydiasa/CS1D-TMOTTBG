#include "mainwindow.h"
#include "splashscreen.h"
#include "nonuserinterface_ui.h"
//TEST RUN THINGY
#include "introscreen.h"
//TEST RUN ENDY
#include <QApplication>
#include "header.h"
#include "QtSql"
#include "QtDebug"
#include "QFile"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    SplashScreen *splashWindow;
//    splashWindow = new SplashScreen();
//    splashWindow->show();

    NonUserInterface_UI *splashWindow;
    splashWindow = new NonUserInterface_UI();
    splashWindow->show();

    return a.exec();
}

