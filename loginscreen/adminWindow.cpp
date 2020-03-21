#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QDebug>
#include <QSqlQueryModel>
#include <QSqlQuery>
adminWindow::adminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminWindow)
{
    ui->setupUi(this);
    this->ui->adDropMenu->addItem("Alphabetical");
    this->ui->adDropMenu->addItem("Interest");
    this->ui->adDropMenu->addItem("Most Recent");
    QObject::connect(this->ui->adDropMenu, SIGNAL(activated(int)), this, SLOT(alphaNumOptions(int)));
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
 //TBH im not entirely sure what this does but it works..
    QSqlQuery *qry = new QSqlQuery(db);
    qry->prepare("select * from customertable");
    qry->exec();
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
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(*qry);
    this->ui->tableView->setModel(model);
    //qDebug() << (model->rowCount());
    db.close();
    qDebug()<< "END";
}

adminWindow::~adminWindow()
{
    delete ui;
}

void adminWindow::searchFor() {
    //Obviously this function is going to be for searching
    QString searchingFor = this->ui->searchLine->text();
    this->ui->searchLine->setText("");
}

void adminWindow::alphaNumOptions(int index) {
    /*
        MAKE SURE TO COMMENT OUT OR REMOVE DEBUG!
        WAS ONLY USED TO CHECK/ENSURE FUNCTIONALITY!
    */
    QString option = this->ui->adDropMenu->itemText(index);
    if (option == "Alphabetical") {
        //insert a function to sort alphabetically
        qDebug() << "Alpha works";
    } else if (option == "Interest") {
        //insert a function to sort by interest
        qDebug() << "Interest works";
    } else if (option == "Most Recent") {
        //insert a function to sort by most recent
        qDebug() << "Recents works";
    }
}

void adminWindow::updateDB() {

}

void adminWindow::deleteInDB() {

}
