#include "mainwindow.h"
#include "splashscreen.h"
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

    IntroScreen *splashWindow;
    splashWindow = new IntroScreen();
    splashWindow->show();

    return a.exec();
}

