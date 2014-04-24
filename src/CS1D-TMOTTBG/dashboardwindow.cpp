#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include "createuserwindow.h"

DashboardWindow::DashboardWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DashboardWindow)
{
    ui->setupUi(this);
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
