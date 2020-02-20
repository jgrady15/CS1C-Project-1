#include "frontpage.h"
#include <QCoreApplication>
#include <QApplication>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

//AddValues - adds the values to the database. It is used by the readFromFile function
void addValues(QString Name, QString Address, QString Address2, QString WebSite, QString Intrest, QString Key){
    QSqlQuery qry;
    qry.prepare("INSERT INTO customertable ("
                "Name,"
                "Address,"
                "Address2,"
                "Website,"
                "Intrest,"
                "Key)"
                "VALUES (?,?,?,?,?,?);");
    qry.addBindValue(Name);
    qry.addBindValue(Address);
    qry.addBindValue(Address2);
    qry.addBindValue(WebSite);
    qry.addBindValue(Intrest);
    qry.addBindValue(Key);

    if(!qry.exec()){
        qDebug() << "ERROR";
    }
    //HGI

}
//readFromFile reads the customer lists and add them onto the database
void readFromFile(){

    QFile file("C:\\Users\\Andy\\GitProject1\\CS1C-Project-1\\Customers.txt");      //Change the file folder to yours
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);
    while(!in.atEnd()) {
        QString name = in.readLine();
        QString address = in.readLine();
        QString address2 = in.readLine();
        QString website = in.readLine();
        QString intrest = in.readLine();
        QString key = in.readLine();
        QString empty = in.readLine();

        addValues(name,address,address2,website,intrest,key);       //Uses the addValues function to insert into the database
    }

    file.close();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug()<< "Start";

//Creates and opens the database
    QString path= "db.sqlite";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);
    db.open();

    if(db.isOpen()){
        qDebug() << "Databse is open";
    }
    else{
        qDebug() << "Database doesn't open";
    }

    QString query = "CREATE TABLE customertable ("
                    "Name VARCHAR(20),"
                    "Address VARCHAR(40),"
                    "Address2 VARCHAR(30),"
                    "Website VARCHAR(30),"
                    "Intrest VARCHAR(20),"
                    "Key VARCHAR(10))";

    QSqlQuery qry; //TBH im not entirely sure what this does but it works...
    qry.exec(query);

 //DELETES ITEMS FROM DATABASE  - use it to delete the items
  /*  QString name= "Orange County Airport";
    qry.prepare("Delete from customertable");
     if(!qry.exec() )
        qDebug() << "deletion failed";

     query.clear();
     qry.prepare("DELETE FROM SQLITE_SEQUENCE WHERE name='customertable'");
     if(!qry.exec() )
         qDebug() << "deletion failed";
*/

    //readFromFile(); //Uses the function to insert the file into the database (THE DATABASE IS ALREADY FULL SO NO NEED TO UNCOMMENT THIS)

    db.close();

    qDebug()<< "END";

    FrontPage w;
    w.show();

    return a.exec();
}
