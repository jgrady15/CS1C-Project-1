#include "frontpage.h"
#include "sql_database.h"
#include <QCoreApplication>
#include <QApplication>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FrontPage w;
    sql_database db;
    db.sql_createDatabase();
    //db.readFile();
    w.show();

    return a.exec();
}
