#ifndef DISPLAYVACATIONPLANNERWINDOW_H
#define DISPLAYVACATIONPLANNERWINDOW_H

#include <QWidget>
#include <QSqlQuery>
#include <QFormLayout>
#include <QCheckBox>
#include <QComboBox>

namespace Ui {
class DisplayVacationPlannerWindow;
}

class DisplayVacationPlannerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DisplayVacationPlannerWindow(QWidget *parent = 0);
    ~DisplayVacationPlannerWindow();

private slots:
    void on_pushButton_clicked();

    void on_nationalButton_clicked();

    void on_americanOnly_clicked();

private:
    QFormLayout *layout;
    QSqlQuery query;
    QComboBox* startingLocation;
    QList<QString> checkedBoxes;
    QList<QCheckBox *> checkBox;
    QList<bool> leagueType;
    Ui::DisplayVacationPlannerWindow *ui;
};

#endif // DISPLAYVACATIONPLANNERWINDOW_H
