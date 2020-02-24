#ifndef SQL_DATABASE_H
#define SQL_DATABASE_H

#include "header.h"

class sql_database
{
private:
    QString data[6];
    QString DB_PATH = "D:/Programming/CS-1C-master/CS1C-Project-1-mainTestBranch/loginscreen/database.sqlite";

    QSqlDatabase database;

public:
    sql_database();
    ~sql_database();

    bool isOpen() const;
    void sql_createDatabase();

    void addCustomer();
    void updateCustomer();
    void deleteCustomer(QString& searchFor);

    void readFile();
};

#endif // SQL_DATABASE_H
