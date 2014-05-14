#ifndef ADMINEDITOUTPUTLIST_H
#define ADMINEDITOUTPUTLIST_H

#include <QMainWindow>
#include <QSqlQuery>
#include "admineditselectedoutputlist.h"

namespace Ui {
class AdminEditOutputList;
}

class AdminEditOutputList : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminEditOutputList(QWidget *parent = 0);
    ~AdminEditOutputList();

private slots:
    void on_pushButton_clicked();

    void on_AdminEditOutputList_EXIT_BTN_clicked();

private:
    Ui::AdminEditOutputList *ui;
    QSqlQuery query;
    AdminEditSelectedOutputList *ptr;

};

#endif // ADMINEDITOUTPUTLIST_H
