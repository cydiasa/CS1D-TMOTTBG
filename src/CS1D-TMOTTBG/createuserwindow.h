#ifndef CREATEUSERWINDOW_H
#define CREATEUSERWINDOW_H

#include <QDialog>
#include <QComboBox>
#include <QSql>
#include <QSqlQuery>

namespace Ui {
class CreateUserWindow;
}

class CreateUserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CreateUserWindow(QWidget *parent = 0);
    ~CreateUserWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreateUserWindow *ui;
    QComboBox *countryComboBox;
    QComboBox *cellPhoneProvidor;
    QSqlDatabase database;
    QSqlQuery query;
};

#endif // CREATEUSERWINDOW_H
