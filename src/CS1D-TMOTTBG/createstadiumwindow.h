#ifndef CREATESTADIUMWINDOW_H
#define CREATESTADIUMWINDOW_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class CreateStadiumWindow;
}

class CreateStadiumWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CreateStadiumWindow(QWidget *parent = 0);
    ~CreateStadiumWindow();

private slots:
    void on_cancelButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::CreateStadiumWindow *ui;
    QSqlQuery query;
    QString id,
    stadiumName,
    stadiumTeamName,
    address,
    phoneNumber,
    dateOpened,
    population,
    americanLeague,
    grass,
    userID = "";
};

#endif // CREATESTADIUMWINDOW_H
