#ifndef SQL_DATABASE_H
#define SQL_DATABASE_H

#include "header.h"

struct customerNode
{
    int companyID;
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
    unsigned int indexBookmark;
    std::vector<customerNode> data;
    QString DB_PATH = "D:/Programming/CS-1C-master/CS1C-Project-1-mainTestBranch/loginscreen/database.sqlite";
    QSqlDatabase database;

public:
    sql_database();
    ~sql_database();

    bool isOpen() const;
    void sql_createDatabase();
    QSqlDatabase grabDatabase();
    void closeConnection();

    std::vector<customerNode> grabVector();

    void addCustomer(int index);
    void editCustomer(QString *temp);
    void deleteCustomer(QString& searchFor);
    void setIndex(int index);

    void readFile();
};

#endif // SQL_DATABASE_H
