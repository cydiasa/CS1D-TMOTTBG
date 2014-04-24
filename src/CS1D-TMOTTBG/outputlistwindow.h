#ifndef OUTPUTLISTWINDOW_H
#define OUTPUTLISTWINDOW_H

#include <QDialog>

namespace Ui {
class OutputListWindow;
}

class OutputListWindow : public QDialog
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString color READ color WRITE setColor NOTIFY colorChanged)

public:
    explicit OutputListWindow(QWidget *parent = 0);
    ~OutputListWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::OutputListWindow *ui;
};

#endif // OUTPUTLISTWINDOW_H
