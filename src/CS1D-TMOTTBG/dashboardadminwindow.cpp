#include "dashboardadminwindow.h"
#include "ui_dashboardadminwindow.h"
#include "outputlistwindow.h"
#include "createuserwindow.h"
#include "adminedituserwindow.h"

DashBoardAdminWindow::DashBoardAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DashBoardAdminWindow)
{
    ui->setupUi(this);
}

DashBoardAdminWindow::~DashBoardAdminWindow()
{
    delete ui;
}

void DashBoardAdminWindow::on_pushButton_2_clicked()
{
    OutputListWindow *ptr;
    ptr = new OutputListWindow();
    ptr->show();
}


void DashBoardAdminWindow::on_pushButton_clicked()
{
    CreateUserWindow *ptr;
    ptr = new CreateUserWindow();
    ptr->show();
}

void DashBoardAdminWindow::on_pushButton_3_clicked()
{
    AdminEditUserWindow *ptr;
    ptr = new AdminEditUserWindow();
    ptr->show();
}
