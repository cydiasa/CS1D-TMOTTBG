#include "dashboardadminwindow.h"
#include "ui_dashboardadminwindow.h"
#include "outputlistwindow.h"
#include "admineditoutputlist.h"
#include "createuserwindow.h"
#include "adminedituserwindow.h"
#include "displayvacationplannerwindow.h"

DashBoardAdminWindow::DashBoardAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DashBoardAdminWindow)
{

    ui->setupUi(this);

    setAttribute(Qt::WA_DeleteOnClose);
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

void DashBoardAdminWindow::on_editListButton_clicked()
{
    AdminEditOutputList *ptr;
    ptr = new AdminEditOutputList();
    ptr->show();
}

void DashBoardAdminWindow::on_editListButton_2_clicked()
{
    DisplayVacationPlannerWindow *ptr;
    ptr = new DisplayVacationPlannerWindow();

    ptr->show();
}
