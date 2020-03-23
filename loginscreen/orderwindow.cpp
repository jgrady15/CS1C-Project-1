#include "orderwindow.h"
#include "ui_orderwindow.h"
#include <QSqlQuery>
#include <QMessageBox>

orderWindow::orderWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::orderWindow)
{
    ui->setupUi(this);
    this->ui->menuDrop->addItem("Basic Package");
    this->ui->menuDrop->addItem("Rugged Edition");
    this->ui->menuDrop->addItem("Deluxe Package");
    QObject::connect(this->ui->menuDrop, SIGNAL(activated(int)), this, SLOT(setProduct(int)));
}

orderWindow::~orderWindow()
{
    delete ui;
}


void orderWindow::setProduct(int index)
{
    QString total;
    if (this->ui->menuDrop->itemText(index) == "Basic Package") {
        this->ui->productLine->setText(this->ui->menuDrop->itemText(index));
        total = QString::number(1299.99 * this->ui->qtyBox->value());
        this->ui->totalLine->setText(total);
    } else if (this->ui->menuDrop->itemText(index) == "Rugged Edition") {
        this->ui->productLine->setText(this->ui->menuDrop->itemText(index));
        total = QString::number(1799.99 * this->ui->qtyBox->value());
        this->ui->totalLine->setText(total);
    } else if (this->ui->menuDrop->itemText(index) == "Deluxe Package") {
        this->ui->productLine->setText(this->ui->menuDrop->itemText(index));
        total = QString::number(2199.99 * this->ui->qtyBox->value());
        this->ui->totalLine->setText(total);
    }
}


void orderWindow::order()
{
    QMessageBox::information(this, "Success!", "Order completed!");
    QSqlQuery query;
    query.prepare("INSERT OR IGNORE INTO CustomerInfo(CustomerName, ProductName, QtyBought, MoneySpent)"
                  "VALUES(:name, :item, :qty, :total);");
    query.bindValue(":name", ui->nameLine->text());
    query.bindValue(":item", ui->productLine->text());
    query.bindValue(":qty", ui->qtyBox->value());
    query.bindValue(":total", ui->totalLine->text());
    query.exec();
}
