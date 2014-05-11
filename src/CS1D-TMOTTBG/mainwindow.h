#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QNetworkReply>
#include <QFileInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    struct ListStruct
    {
        QString cityName;
        QString     distance;
    };
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

    void on_usernameInputBox_returnPressed();

    void on_passwordInputBox_returnPressed();

//    void fileIsReady(QNetworkReply* reply);



private:
    Ui::MainWindow *ui;
    QSqlDatabase database;
    QSqlQuery queryStatement;
};

#endif // MAINWINDOW_H
