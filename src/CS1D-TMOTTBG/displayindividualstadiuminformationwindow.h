#ifndef DISPLAYINDIVIDUALSTADIUMINFORMATIONWINDOW_H
#define DISPLAYINDIVIDUALSTADIUMINFORMATIONWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QNetworkReply>

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

    void on_distanceToDropDown_currentTextChanged(const QString &arg1);

    void fileIsReady(QNetworkReply* reply);

private:
    Ui::DisplayIndividualStadiumInformationWindow *ui;
    QSqlQuery query;
    QSqlQuery queryDistance;
    QSqlQuery queryDistanceAddress;
    QString address;
    QString destination;
    int zoomLevel;

};

#endif // DISPLAYINDIVIDUALSTADIUMINFORMATIONWINDOW_H
