#ifndef ADMINEDITUSERWINDOW_H
#define ADMINEDITUSERWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QString>

namespace Ui {
class AdminEditUserWindow;
}

class AdminEditUserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminEditUserWindow(QWidget *parent = 0);
    ~AdminEditUserWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AdminEditUserWindow *ui;
    QSqlQuery query;

    QString id;
    QString username;
    QString firstName;
    QString lastName;
};

#endif // ADMINEDITUSERWINDOW_H
