#include "sql_database.h"
#include <QFileInfo>

/*!
 * \brief Creates a database with relative path, sets path, then proceeds to open database
 */
sql_database::sql_database()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    QFileInfo db("database.sqlite");
    QString DB_PATH = db.absoluteFilePath();
    qDebug() << DB_PATH;
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

/*!
 * \brief Creates 4 tables to be used throughout program
 */
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

    query.exec("CREATE TABLE CustomerInfo("
               "CustomerName VARCHAR(50),"
               "ProductName VARCHAR(50),"
               "QtyBought INTEGER,"
               "MoneySpent VARCHAR(20));");

    query.exec("CREATE TABLE PamphletInfo("
               "CustomerName VARCHAR(50),"
               "CustomerEmail VARCHAR (50));");
}

/*!
 * \brief Adds company information through a struct and then to database
 */
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

//void sql_database::readFile()
//{
   // QFile file(":/customers.txt");
   // file.open(QIODevice::ReadOnly);
   // QTextStream inFile(&file);

   // while(!inFile.atEnd())
   // {
     //   data.companyName    = inFile.readLine();
      //  data.streetName     = inFile.readLine();
      //  data.cityStateZip   = inFile.readLine();
      //  data.websiteName    = inFile.readLine();
      //  data.interestLevel  = inFile.readLine();
      //  data.keyCustomer    = inFile.readLine();

      //  addCustomer(data);
  //  }  // file.close();
//}
