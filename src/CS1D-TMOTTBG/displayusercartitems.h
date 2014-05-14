#ifndef DISPLAYUSERCARTITEMS_H
#define DISPLAYUSERCARTITEMS_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class DisplayUserCartItems;
}

class DisplayUserCartItems : public QWidget
{
    Q_OBJECT

public:
    explicit DisplayUserCartItems(QString id, QWidget *parent = 0);
    ~DisplayUserCartItems();

private:
    Ui::DisplayUserCartItems *ui;
    QSqlQuery query;
    QSqlQuery subQuery;
};

#endif // DISPLAYUSERCARTITEMS_H
