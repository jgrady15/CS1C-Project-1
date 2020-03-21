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
    QFile file("C:/Users/edpou/Documents/GitHub/CS1C-Project-1/loginscreen/customers.txt");      //Change the file folder to yours
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
    FrontPage w;
    w.show();

    return a.exec();
}
