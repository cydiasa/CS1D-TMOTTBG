#ifndef CREATEUSERWINDOW_H
#define CREATEUSERWINDOW_H

#include <QDialog>
#include <QComboBox>
#include <QSql>
#include <QSqlQuery>
#include <QString>

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

    void on_resetButton_clicked();

    void on_createButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::CreateUserWindow *ui;
    QComboBox *countryComboBox;
    QComboBox *cellPhoneProvidor;
    QSqlDatabase database;
    QSqlQuery query;
};

#endif // CREATEUSERWINDOW_H
