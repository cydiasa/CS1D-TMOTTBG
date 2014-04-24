#include "outputlistwindow.h"
#include "ui_outputlistwindow.h"
#include <QStringListModel>
#include <QDeclarativeView>
#include "outputlistdelegate.h"
#include <QApplication>
#include <qdeclarative.h>
#include <QDeclarativeView>
#include <QApplication>
#include <QDeclarativeContext>

OutputListWindow::OutputListWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputListWindow)
{
    ui->setupUi(this);



}

OutputListWindow::~OutputListWindow()
{
    delete ui;
}

void OutputListWindow::on_pushButton_clicked()
{
    QDeclarativeView view;
    QStringList dataList;
        dataList.append("Item 1", "MEOW");
        dataList.append("Item 2", "MEOW");
        dataList.append("Item 3", "MEOW");
        dataList.append("Item 4", "MEOW");
    QDeclarativeContext* context = view.rootContext();
        context->setContextProperty("myModel",QVariant::fromValue(dataList));

    ui->listWidget->addItem("asd");
    view.setSource(QUrl::fromLocalFile("../CS1D-TMOTTBG/outputLisQML.qml"));
    view.show();
}
