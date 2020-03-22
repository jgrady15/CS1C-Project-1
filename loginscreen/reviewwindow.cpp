#include "reviewwindow.h"
#include "ui_reviewwindow.h"

reviewWindow::reviewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::reviewWindow)
{
    ui->setupUi(this);
    this->ui->menuDrop->addItem("Basic Package");
    this->ui->menuDrop->addItem("Rugged Edition");
    this->ui->menuDrop->addItem("Deluxe Package");
    QObject::connect(this->ui->menuDrop, SIGNAL(activated(int)), this, SLOT(setProduct(int)));

    QPixmap star(":/img/images/star");
    this->ui->starLabel->setPixmap(star.scaled(250,22,Qt::KeepAspectRatio));
}

reviewWindow::~reviewWindow()
{
    delete ui;
}

void reviewWindow::makeAnon()
{
    if (this->ui->anonBox->isChecked())
    {
        this->ui->nameLine->setStyleSheet("QLineEdit {background-color:lightgray;}");
        this->ui->nameLine->setText("Anonymous");
        this->ui->nameLine->setReadOnly(true);
    }

    else
    {
        this->ui->nameLine->setStyleSheet("QLineEdit {background-color:white;}");
        this->ui->nameLine->setText("");
        this->ui->nameLine->setReadOnly(false);
    }
}

void reviewWindow::setProduct(int index)
{
    this->ui->productLine->setText(this->ui->menuDrop->itemText(index));
}

void reviewWindow::submitReview()
{
    QSqlQuery query;
    QMessageBox errorOccurred;

    errorOccurred.setStyleSheet("QLabel {min-width: 300px;}");
    if (this->ui->nameLine->text() != "" && this->ui->productLine->text() != "")
    {
        QString data = ui->textEdit->toPlainText();
        QStringList splitData = data.split(QRegExp("[\n]"), QString::SkipEmptyParts);

        this->ui->productLabel->setStyleSheet("QLabel {font-weight: normal;}");
        this->ui->nameLabel->setStyleSheet("QLabel {font-weight: normal;}");

        query.prepare("INSERT OR IGNORE INTO CustomerReviews(CustomerName, ProductName, ReviewNumber, TextReview)"
                      "VALUES(:name, :item, :rating, :textReview);");

        query.bindValue(":name", ui->nameLine->text());
        query.bindValue(":item", ui->productLine->text());
        query.bindValue(":rating", ui->ratingBox->text());
        query.bindValue(":textReview", splitData);

        if(!query.exec())
            qDebug() << query.lastError();

        this->close();
    }

    else if (ui->nameLine->text() == "" && this->ui->productLine->text() != "")
    {
        errorOccurred.setInformativeText("No name!");
        errorOccurred.setStandardButtons(QMessageBox::Ok);
        errorOccurred.exec();
        this->ui->nameLabel->setStyleSheet("QLabel {font: bold 14px; color: red}");
        this->ui->productLabel->setStyleSheet("QLabel {font-weight: normal;}");
    }

    else if (ui->nameLine->text() != "" && this->ui->productLine->text() == "")
    {
        errorOccurred.setInformativeText("No product selected!");
        errorOccurred.setStandardButtons(QMessageBox::Ok);
        errorOccurred.exec();
        this->ui->productLabel->setStyleSheet("QLabel {font: bold 14px; color: red}");
        this->ui->nameLabel->setStyleSheet("QLabel {font-weight: normal;}");
    }

//    else if ()
//    {
//        errorOccurred.setInformativeText("No info provided!");
//        errorOccurred.setStandardButtons(QMessageBox::Ok);
//        errorOccurred.exec();
//        this->ui->nameLabel->setStyleSheet("QLabel {font: bold 14px; color: red}");
//        this->ui->productLabel->setStyleSheet("QLabel {font: bold 14px; color: red}");
//    }
}
