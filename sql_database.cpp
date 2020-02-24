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

void sql_database::sql_createDatabase()
{
    QSqlQuery query;

    query.exec("CREATE TABLE iRobotsPamphlet("
           "CompanyName  VARCHAR(35) PRIMARY KEY,"
           "StreetName   VARCHAR(40),"
           "CityStateZip VARCHAR(40),"
           "WebsiteName  VARCHAR(35),"
           "InterestLvl  VARCHAR(35),"
           "KeyCustomer  VARCHAR(15));");
}

void sql_database::addCustomer()
{
    QSqlQuery query;

    query.exec("CREATE UNIQUE INDEX idx_companyName"
               "ON iRobotsPamphlet (CompanyName)");

    // WILL INSERT IF NEW VALUES EXIST
    query.prepare("REPLACE INTO iRobotsPamphlet(CompanyName, StreetName, CityStateZip, WebsiteName, InterestLvl, KeyCustomer)"
                  "VALUES(:companyName, :streetName, :cityStateZip, :websiteName, :interestLvl, :keyCustomer)");

    query.bindValue(":companyName",  data[0]);
    query.bindValue(":streetName",   data[1]);
    query.bindValue(":cityStateZip", data[2]);
    query.bindValue(":websiteName",  data[3]);
    query.bindValue(":interestLvl",  data[4]);
    query.bindValue(":keyCustomer",  data[5]);

    if(!query.exec())
        qDebug() << "Failed: " << query.lastError();
}

void sql_database::updateCustomer()
{
    QSqlQuery query;

    query.bindValue(":companyName",  data[0]);
    query.bindValue(":streetName",   data[1]);
    query.bindValue(":cityStateZip", data[2]);
    query.bindValue(":websiteName",  data[3]);
    query.bindValue(":interestLvl",  data[4]);
    query.bindValue(":keyCustomer",  data[5]);

    query.prepare("UPDATE iRobotsPamplet"
                  "SET CompanyName = :companyName,"
                  "StreetName = :streetName,"
                  "CityStateZip = :cityStateZip,"
                  "WebsiteName = :websiteName,"
                  "InterestLvl = :interestLvl,"
                  "KeyCustomer = :keyCustomer");

    if(query.exec())
        qDebug() << "UPDATE WORKED!";
    else
        qDebug() << "UPDATE DID NOT WORK";
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

    int index = 0;
    while(!inFile.atEnd())
    {
        data[index] = inFile.readLine();

        if(index == 5)
        {
            addCustomer();
            index = -1;
        }

        ++index;
    }

    file.close();
}
