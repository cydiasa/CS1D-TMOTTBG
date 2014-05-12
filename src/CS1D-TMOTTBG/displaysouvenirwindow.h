#ifndef DISPLAYSOUVENIRWINDOW_H
#define DISPLAYSOUVENIRWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QSqlQuery>

namespace Ui {
class DisplaySouvenirWindow;
}

class DisplaySouvenirWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DisplaySouvenirWindow(QWidget *parent = 0);
    ~DisplaySouvenirWindow();

private slots:
    void cellPopup(int row);
private:
    Ui::DisplaySouvenirWindow *ui;
    QList<QPushButton*> buttonList;
    QSqlQuery query;
};

#endif // DISPLAYSOUVENIRWINDOW_H
