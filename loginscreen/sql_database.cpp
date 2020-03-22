#include "sql_database.h"

sql_database::sql_database()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(DB_PATH);
    database.open();
}

sql_database::~sql_database()
{
}

bool sql_database::isOpen() const
{
    return database.isOpen();
}

QSqlDatabase sql_database::grabDatabase()
{
    return database;
}

void sql_database::closeConnection()
{
    database.close();
}

void sql_database::sql_createDatabase()
{
    QSqlQuery query;
    query.exec("CREATE TABLE iRobotsPamphlet("
               "CompanyName   VARCHAR(35) PRIMARY KEY,"
               "StreetName    VARCHAR(40),"
               "CityStateZip  VARCHAR(40),"
               "WebsiteName   VARCHAR(35),"
               "InterestLevel VARCHAR(35),"
               "KeyCustomer   VARCHAR(15));");

    query.exec("CREATE TABLE CustomerReviews("
               "CustomerName  VARCHAR(50),"
               "ProductName   VARCHAR(40),"
               "ReviewNumber  INTEGER,"
               "TextReview    TEXT,"
               "UNIQUE        (CustomerName, ProductName));");
}

void sql_database::addCustomer(customerNode &temp)
{
    QSqlQuery query;
    query.prepare("CREATE UNIQUE INDEX uidx_companyName"
                  "ON iRobotsPamphlet (CompanyName);");

    query.prepare("INSERT OR IGNORE INTO iRobotsPamphlet(CompanyName, StreetName, CityStateZip, WebsiteName, InterestLevel, KeyCustomer)"
                  "VALUES(:companyName, :streetName, :cityStateZip, :websiteName, :interestLevel, :keyCustomer)");

    query.bindValue(":companyName",   temp.companyName);
    query.bindValue(":streetName",    temp.streetName);
    query.bindValue(":cityStateZip",  temp.cityStateZip);
    query.bindValue(":websiteName",   temp.websiteName);
    query.bindValue(":interestLevel", temp.interestLevel);
    query.bindValue(":keyCustomer",   temp.keyCustomer);

    if(!query.exec())
        qDebug() << "Failed: " << query.lastError();
}

void sql_database::readFile()
{
    QFile file("D:/Programming/CS-1C-master/CS1C-Project-1-mainTestBranch/loginscreen/customers.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream inFile(&file);

    while(!inFile.atEnd())
    {
        data.companyName    = inFile.readLine();
        data.streetName     = inFile.readLine();
        data.cityStateZip   = inFile.readLine();
        data.websiteName    = inFile.readLine();
        data.interestLevel  = inFile.readLine();
        data.keyCustomer    = inFile.readLine();

        addCustomer(data);
    }   file.close();
}
