#ifndef DISPLAYINDIVIDUALSTADIUMINFORMATIONWINDOW_H
#define DISPLAYINDIVIDUALSTADIUMINFORMATIONWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>

namespace Ui {
class DisplayIndividualStadiumInformationWindow;
}

class DisplayIndividualStadiumInformationWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DisplayIndividualStadiumInformationWindow(QString id, QWidget *parent = 0);
    ~DisplayIndividualStadiumInformationWindow();

private slots:
    void on_zoonIncreaseButton_clicked();

    void on_zoonDecreaseButton_clicked();

private:
    Ui::DisplayIndividualStadiumInformationWindow *ui;
    QSqlQuery query;
    QString address;
    int zoomLevel;

};

#endif // DISPLAYINDIVIDUALSTADIUMINFORMATIONWINDOW_H
