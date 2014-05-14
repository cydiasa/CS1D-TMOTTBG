#ifndef DASHBOARDWINDOW_H
#define DASHBOARDWINDOW_H

#include <QMainWindow>
#include "dashboardadminwindow.h"
#include "ui_dashboardadminwindow.h"
#include "outputlistwindow.h"
#include "admineditoutputlist.h"
#include "createuserwindow.h"
#include "adminedituserwindow.h"
#include "displayvacationplannerwindow.h"
#include "nonuserinterface_ui.h"
#include "displaysouvenirwindow.h"

namespace Ui {
class DashboardWindow;
}

class DashboardWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DashboardWindow(QWidget *parent = 0);
    ~DashboardWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_UserInterface_Settings_BTN_clicked();

    void on_UserInterface_News_BTN_clicked();

    void on_UserInterface_Map_BTN_clicked();

    void on_UserInterface_Weather_BTN_clicked();

    void on_UserInterface_Trip_BTN_clicked();

    void on_UserInterface_Shop_BTN_clicked();

    void on_UserInterface_Tutorial_BTN_clicked();

    void on_UserInterface_SouveneerList_BTN_clicked();

    void on_UserInterface_ShoppingCart_BTN_clicked();

private:
    Ui::DashboardWindow *ui;
    CreateUserWindow             *ptrCreateUserWindow;
    AdminEditUserWindow          *ptrDashBoardAdminWindow;
    AdminEditOutputList          *ptrAdminEditOutputList;
    OutputListWindow             *ptrOutputListWindow;
    DisplayVacationPlannerWindow *ptrDisplayVacationPlannerWindow;
    DisplaySouvenirWindow        *ptrDisplaySouvenirWindow;
};

#endif // DASHBOARDWINDOW_H
