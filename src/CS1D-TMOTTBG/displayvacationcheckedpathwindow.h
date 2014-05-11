#ifndef DISPLAYVACATIONCHECKEDPATHWINDOW_H
#define DISPLAYVACATIONCHECKEDPATHWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QList>

#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QString>
#include <QtXml/QDomDocument>
#include <QtXml/QDomDocument>

namespace Ui {
class displayVacationCheckedPathWindow;
}

class displayVacationCheckedPathWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit displayVacationCheckedPathWindow(QList<QString> checkedBoxList, QString startLocation, QWidget *parent = 0);
    ~displayVacationCheckedPathWindow();

private slots:
    void fileIsReady(QNetworkReply* reply);

private:
    Ui::displayVacationCheckedPathWindow *ui;
    QSqlQuery query;
    QString startLocationAddress;
    QString startLocation;
    QList<QString> checkedBoxAddress;
    QMap<double, QString> sortedList;
};

#endif // DISPLAYVACATIONCHECKEDPATHWINDOW_H
