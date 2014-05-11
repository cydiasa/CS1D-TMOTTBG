#include "mainwindow.h"
#include <QApplication>
#include "header.h"
#include "QtSql"
#include "QtDebug"
#include "QFile"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}

