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

private:
    Ui::DisplayIndividualStadiumInformationWindow *ui;
    QSqlQuery query;

};

#endif // DISPLAYINDIVIDUALSTADIUMINFORMATIONWINDOW_H
