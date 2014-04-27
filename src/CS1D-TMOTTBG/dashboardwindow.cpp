#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include "createuserwindow.h"
#include "outputlistwindow.h"

DashboardWindow::DashboardWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DashboardWindow)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_DeleteOnClose);
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

void DashboardWindow::on_pushButton_2_clicked()
{
    OutputListWindow *ptr;
    ptr = new OutputListWindow();
    ptr->show();
}
