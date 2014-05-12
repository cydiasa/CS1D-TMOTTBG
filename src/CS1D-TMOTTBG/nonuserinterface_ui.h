#ifndef NONUSERINTERFACE_UI_H
#define NONUSERINTERFACE_UI_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class NonUserInterface_UI;
}

class NonUserInterface_UI : public QWidget
{
    Q_OBJECT

public:
    explicit NonUserInterface_UI(QWidget *parent = 0);
    ~NonUserInterface_UI();
    void slot_openLoginBox();

private slots:
    void on_NonUserInterface_UI_Map_BTN_clicked();

    void on_NonUserInterface_UI_Weather_BTN_clicked();

    void on_NonUserInterface_UI_MLBNews_BTN_clicked();

    void on_NonUserInterface_UI_Search_BTN_clicked();

    void on_NonUserInterface_Home_BTN_clicked();

    void on_NonUserInterface_About_Us_BTN_clicked();

    void on_NonUserInterface_Services_BTN_clicked();

    void on_NonUserInterface_Tutorial_BTN_clicked();

    void on_NonUserInterface_Login_BTN_clicked();

    void on_NonUserInterface_Register_BTN_clicked();

private:
    Ui::NonUserInterface_UI *ui;
        MainWindow *openLoginBox;
};

#endif // NONUSERINTERFACE_UI_H
