#ifndef DASHBOARDADMINWINDOW_H
#define DASHBOARDADMINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::DashBoardAdminWindow *ui;
};

#endif // DASHBOARDADMINWINDOW_H
