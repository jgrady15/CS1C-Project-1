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
    unsigned int indexBookmark;
    QSqlDatabase database;
    customerNode data;

public:
    sql_database();
    ~sql_database();

    bool isOpen() const;
    void sql_createDatabase();
    QSqlDatabase grabDatabase();
    void closeConnection();

    void addCustomer(customerNode &temp); // Adds information to iRobotsPamphlet table
    void editCustomer(QString *temp);
    void deleteCustomer(QString& searchFor); // Deletes information from iRobotsPamphlet
    void setIndex(int index);

    void readFile(); // Reads in text file and stores information into a struct
};

#endif // SQL_DATABASE_H
