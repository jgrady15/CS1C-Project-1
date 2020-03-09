#ifndef SQL_DATABASE_H
#define SQL_DATABASE_H

#include "header.h"

struct customerNode
{
    QString companyName;
    QString streetName;
    QString cityStateZip;
    QString websiteName;
    QString interestLevel;
    QString keyCustomer;
};

class sql_database
{
private:
    std::vector<customerNode> data;
    QString DB_PATH = "D:/Programming/CS-1C-master/CS1C-Project-1-mainTestBranch/loginscreen/database.sqlite";

    QSqlDatabase database;

public:
    sql_database();
    ~sql_database();

    bool isOpen() const;
    void sql_createDatabase();

    void addCustomer(int index);
    void editCustomer(int index);
    void deleteCustomer(QString& searchFor);

    void readFile();
};

#endif // SQL_DATABASE_H
