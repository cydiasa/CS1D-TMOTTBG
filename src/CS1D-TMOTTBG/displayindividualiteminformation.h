#ifndef DISPLAYINDIVIDUALITEMINFORMATION_H
#define DISPLAYINDIVIDUALITEMINFORMATION_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class DisplayIndividualItemInformation;
}

class DisplayIndividualItemInformation : public QWidget
{
    Q_OBJECT

public:
    explicit DisplayIndividualItemInformation(QString name, QWidget *parent = 0);
    ~DisplayIndividualItemInformation();

private slots:
    void on_cancelButton_clicked();

    void on_purchaseButton_clicked();


    void on_spinBox_valueChanged(int arg1);

private:
    Ui::DisplayIndividualItemInformation *ui;
    QSqlQuery query;
    QSqlQuery queryName;
    QSqlQuery queryUpdate;
    QString itemPrice;
    QString itemName;
};

#endif // DISPLAYINDIVIDUALITEMINFORMATION_H
