#ifndef MAIN_H
#define MAIN_H
#include <QSqlQuery>
#include <QSqlDatabase>
class maine {
public:
    QSqlQuery qry;
    QSqlDatabase *db;
private:
    void addValues(QString Name, QString Address, QString Address2, QString WebSite, QString Intrest, QString Key);
    void readFromFile();
};

#endif // MAIN_H
