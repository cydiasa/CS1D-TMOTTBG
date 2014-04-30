#ifndef ADMINEDITSELECTEDUSERWINDOW_H
#define ADMINEDITSELECTEDUSERWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QSqlQuery>

namespace Ui {
class AdminEditSelectedUserWindow;
}

class AdminEditSelectedUserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminEditSelectedUserWindow(QString id, QWidget *parent = 0);
    ~AdminEditSelectedUserWindow();

private slots:
    void on_createButton_clicked();

    void on_cancelButton_clicked();


    void on_resetButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::AdminEditSelectedUserWindow *ui;
    QSqlQuery query;
    QString userID;
    QString firstName;
    QString lastName ;
    QString email   ;
    QString username;
    QString password;
    QString address ;
    QString zipCode;
    QString city    ;
    QString country  ;
    QString cellPhoneNumber;
    QString cellPhoneProvider;
};

#endif // ADMINEDITSELECTEDUSERWINDOW_H
