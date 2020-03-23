#include "pamphletinfo.h"
#include "ui_pamphletinfo.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlError>

pamphletInfo::pamphletInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pamphletInfo)
{
    ui->setupUi(this);
    setupPage();
}

pamphletInfo::~pamphletInfo()
{
    delete ui;
}

void pamphletInfo::setupPage() {
    QSqlQuery query;
    QSqlRecord record;
    QStringList temp1, temp2;
    query.prepare("SELECT CustomerName, CustomerEmail FROM PamphletInfo;");
    if(!query.exec())
        qDebug() << query.lastError();

    while(query.next())
    {
        record = query.record();
        temp1 << record.value(0).toString();
        temp2 << record.value(1).toString();
    }

    ui->nameList->addItems(temp1);
    ui->emailList->addItems(temp2);
}

void pamphletInfo::refresh() {
    QSqlQuery query;
    QSqlRecord record;
    QStringList temp1, temp2;
    query.prepare("SELECT CustomerName, CustomerEmail FROM PamphletInfo;");
    if(!query.exec())
        qDebug() << query.lastError();

    while(query.next())
    {
        record = query.record();
        temp1 << record.value(0).toString();
        temp2 << record.value(1).toString();
    }
    ui->nameList->clear();
    ui->emailList->clear();

    ui->nameList->addItems(temp1);
    ui->emailList->addItems(temp2);
}
