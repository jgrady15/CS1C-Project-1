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

std::vector<customerNode> sql_database::grabVector()
{
    return data;
}

void sql_database::sql_createDatabase()
{
    QSqlQuery query;
    query.exec("CREATE TABLE iRobotsPamphlet("
               "CompanyID    INTEGER PRIMARY KEY,"
               "CompanyName  VARCHAR(35),"
               "StreetName   VARCHAR(40),"
               "CityStateZip VARCHAR(40),"
               "WebsiteName  VARCHAR(35),"
               "InterestLevel  VARCHAR(35),"
               "KeyCustomer  VARCHAR(15));");
}

void sql_database::addCustomer(int index)
{
    QSqlQuery query;
    query.exec("CREATE UNIQUE INDEX idx_companyID"
               "ON iRobotsPamphlet (CompanyID)");

    // WILL INSERT IF NEW VALUES EXIST
    query.prepare("REPLACE INTO iRobotsPamphlet(CompanyID, CompanyName, StreetName, CityStateZip, WebsiteName, InterestLevel, KeyCustomer)"
                  "VALUES(:companyID, :companyName, :streetName, :cityStateZip, :websiteName, :interestLevel, :keyCustomer)");

    query.bindValue(":companyID",  data[index].companyID);
    query.bindValue(":companyName",  data[index].companyName);
    query.bindValue(":streetName",   data[index].streetName);
    query.bindValue(":cityStateZip", data[index].cityStateZip);
    query.bindValue(":websiteName",  data[index].websiteName);
    query.bindValue(":interestLevel",  data[index].interestLevel);
    query.bindValue(":keyCustomer",  data[index].keyCustomer);

    if(!query.exec())
        qDebug() << "Failed: " << query.lastError();
}

void sql_database::editCustomer(QString *temp)
{
    QSqlQuery query;
    query.prepare("UPDATE iRobotsPamphlet"
                  "SET   CompanyName   = '" + temp[1] + "',"
                  "      StreetName    = '" + temp[2] + "',"
                  "      CityStateZip  = '" + temp[3] + "',"
                  "      WebsiteName   = '" + temp[4] + "',"
                  "      InterestLevel = '" + temp[5] + "',"
                  "      KeyCustomer   = '" + temp[6] + "'"
                  "WHERE CompanyID     = :companyID;");

    query.bindValue(":companyID", temp[0].toInt());
//    query.bindValue(":companyName",  temp[1]);
//    query.bindValue(":streetName",   temp[2]);
//    query.bindValue(":cityStateZip", temp[3]);
//    query.bindValue(":websiteName",  temp[4]);
//    query.bindValue(":interestLevel",  temp[5]);
//    query.bindValue(":keyCustomer",  temp[6]);

    if(!query.exec())
        qDebug() << "UPDATE Failed: " << query.lastError();

    for(std::vector<customerNode>::iterator it = data.begin(); it != data.end(); ++it)
    {
        if(it->companyID == temp[0].toInt())
        {
            it->companyName   = temp[1];
            it->streetName    = temp[2];
            it->cityStateZip  = temp[3];
            it->websiteName   = temp[4];
            it->interestLevel = temp[5];
            it->keyCustomer   = temp[6];
        }
    }

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

void sql_database::setIndex(int index)
{
    this->indexBookmark = index;
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
        temp.companyID = inFile.readLine().toInt();
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
