#ifndef OUTPUTLISTWINDOW_H
#define OUTPUTLISTWINDOW_H

#include <QDialog>

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

private:
    Ui::OutputListWindow *ui;
};

#endif // OUTPUTLISTWINDOW_H
