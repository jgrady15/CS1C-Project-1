#include "sql_database.h"

sql_database::sql_database()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(DB_PATH);
    database.open();
}

sql_database::~sql_database()
{
    database.close();
}

bool sql_database::isOpen() const
{
    return database.isOpen();
}

void sql_database::sql_createDatabase()
{
    QSqlQuery query;
    query.exec("CREATE TABLE iRobotsPamphlet("
           "CompanyName  VARCHAR(35) PRIMARY KEY,"
           "StreetName   VARCHAR(40),"
           "CityStateZip VARCHAR(40),"
           "WebsiteName  VARCHAR(35),"
           "InterestLevel  VARCHAR(35),"
           "KeyCustomer  VARCHAR(15));");
}

void sql_database::addCustomer(int index)
{
    QSqlQuery query;
    query.exec("CREATE UNIQUE INDEX idx_companyName"
               "ON iRobotsPamphlet (CompanyName)");

    // WILL INSERT IF NEW VALUES EXIST
    query.prepare("REPLACE INTO iRobotsPamphlet(CompanyName, StreetName, CityStateZip, WebsiteName, InterestLevel, KeyCustomer)"
                  "VALUES(:companyName, :streetName, :cityStateZip, :websiteName, :interestLevel, :keyCustomer)");

    query.bindValue(":companyName",  data[index].companyName);
    query.bindValue(":streetName",   data[index].streetName);
    query.bindValue(":cityStateZip", data[index].cityStateZip);
    query.bindValue(":websiteName",  data[index].websiteName);
    query.bindValue(":interestLevel",  data[index].interestLevel);
    query.bindValue(":keyCustomer",  data[index].keyCustomer);

    if(!query.exec())
        qDebug() << "Failed: " << query.lastError();
}

void sql_database::editCustomer(int index)
{
    QSqlQuery query;
    query.prepare("UPDATE iRobotsPamplet"
                  "SET CompanyName = :companyName,"
                  "    StreetName = :streetName,"
                  "    CityStateZip = :cityStateZip,"
                  "    WebsiteName = :websiteName,"
                  "    InterestLevel = :interestLevel,"
                  "    KeyCustomer = :keyCustomer"
                  "WHERE"
                  "    CompanyName = :companyName");

    query.bindValue(":companyName",  data[index].companyName);
    query.bindValue(":streetName",   data[index].streetName);
    query.bindValue(":cityStateZip", data[index].cityStateZip);
    query.bindValue(":websiteName",  data[index].websiteName);
    query.bindValue(":interestLevel",  data[index].interestLevel);
    query.bindValue(":keyCustomer",  data[index].keyCustomer);

    if(!query.exec())
        qDebug() << "UPDATE Failed: " << query.lastError();
}

void sql_database::deleteCustomer(QString& searchFor)
{
    QSqlQuery query;
    query.prepare("DELETE FROM iRobotsPamphlet WHERE CompanyName = :companyName");
    query.bindValue(":companyName", searchFor);

    if(query.exec())
        qDebug() << "deleteCustomer() success\n";
    else
        qDebug() << "Failed: " << query.lastError();
}

void sql_database::readFile()
{
    QFile file("D:/Programming/CS-1C-master/CS1C-Project-1-mainTestBranch/loginscreen/customers.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream inFile(&file);
    customerNode temp;

    int index = 0;
    while(!inFile.atEnd())
    {
        temp.companyName = inFile.readLine();
        temp.streetName = inFile.readLine();
        temp.cityStateZip = inFile.readLine();
        temp.websiteName = inFile.readLine();
        temp.interestLevel = inFile.readLine();
        temp.keyCustomer = inFile.readLine();
        data.push_back(temp);
        addCustomer(index);
        ++index;
    }   file.close();
}
