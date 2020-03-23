#include "header.h"
#include "frontpage.h"
#include "sql_database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sql_database db;
    FrontPage w;

    db.sql_createDatabase();
    db.readFile();
    w.show();

    return a.exec();
}
