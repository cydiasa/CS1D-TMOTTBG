#ifndef ADMINEDITSELECTEDOUTPUTLIST_H
#define ADMINEDITSELECTEDOUTPUTLIST_H

#include <QMainWindow>
#include <QSqlQuery>

namespace Ui {
class AdminEditSelectedOutputList;
}

class AdminEditSelectedOutputList : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminEditSelectedOutputList(QString id, QWidget *parent = 0);
    ~AdminEditSelectedOutputList();

private slots:
    void on_cancelButton_clicked();

    void on_cancelButton_2_clicked();

private:
    Ui::AdminEditSelectedOutputList *ui;
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

#endif // ADMINEDITSELECTEDOUTPUTLIST_H
