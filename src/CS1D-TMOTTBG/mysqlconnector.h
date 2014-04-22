#ifndef MYSQLCONNECTOR_H
#define MYSQLCONNECTOR_H
#include "header.h"
#include <QtSql>

class MySQLConnector
{
    public:

        MySQLConnector(QString databaseTable);
        void setDatabaseTable(QString newTable);
        QString getSqlStatus();
        void debug_printAll();

    private:
        QSqlDatabase db;
        QString sqlStatus;
};

#endif // MYSQLCONNECTOR_H
