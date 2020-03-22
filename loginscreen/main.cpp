#include "header.h"
#include "sql_database.h"
#include "frontpage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FrontPage w;
    sql_database db;

    db.sql_createDatabase();
    db.readFile();

    w.show();

    return a.exec();
}
