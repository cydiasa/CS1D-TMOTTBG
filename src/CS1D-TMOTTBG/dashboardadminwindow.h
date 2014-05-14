#ifndef DASHBOARDADMINWINDOW_H
#define DASHBOARDADMINWINDOW_H

#include <QMainWindow>
#include "dashboardadminwindow.h"
#include "ui_dashboardadminwindow.h"
#include "outputlistwindow.h"
#include "admineditoutputlist.h"
#include "createuserwindow.h"
#include "adminedituserwindow.h"
#include "displayvacationplannerwindow.h"
#include "nonuserinterface_ui.h"
#include "createstadiumwindow.h"

namespace Ui {
class DashBoardAdminWindow;
}

class DashBoardAdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DashBoardAdminWindow(QWidget *parent = 0);
    ~DashBoardAdminWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_editListButton_clicked();

    void on_editListButton_2_clicked();

    void on_Admin_MLBNews_BTN_clicked();

    void on_Admin_Map_BTN_clicked();

    void on_Admin_Weather_BTN_clicked();

    void on_Admin_Shop_BTN_clicked();

    void on_Admin_Tutorial_BTN_clicked();

    void on_Admin_EditUser_BTN_clicked();

    void on_Admin_Stadium_OPEN_BTN_clicked();

    void on_Admin_CreateStadiums_BTN_clicked();

private:
    Ui::DashBoardAdminWindow     *ui;
    CreateUserWindow             *ptrCreateUserWindow;
    AdminEditUserWindow          *ptrDashBoardAdminWindow;
    AdminEditOutputList          *ptrAdminEditOutputList;
    OutputListWindow             *ptrOutputListWindow;
    DisplayVacationPlannerWindow *ptrDisplayVacationPlannerWindow;
    CreateStadiumWindow          *ptrCreateStadiumWindow;
};

#endif // DASHBOARDADMINWINDOW_H
