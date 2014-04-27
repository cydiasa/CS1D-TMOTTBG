#ifndef OUTPUTLISTWINDOW_H
#define OUTPUTLISTWINDOW_H

#include <QDialog>
#include <QSqlQuery>
namespace Ui {
class OutputListWindow;
}

class OutputListWindow : public QDialog
{
    Q_OBJECT

public:
    explicit OutputListWindow(QWidget *parent = 0);

    ~OutputListWindow();

private slots:
    void on_pushButton_clicked();
    void cellPopup(int row);

private:
    Ui::OutputListWindow *ui;
    QSqlQuery query;
};

#endif // OUTPUTLISTWINDOW_H
