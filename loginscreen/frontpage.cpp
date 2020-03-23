#include "frontpage.h"
#include "ui_frontpage.h"
#include "reviewwindow.h"
#include <QMessageBox>
#include <QTableWidget>
#include <QPixmap>

FrontPage::FrontPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrontPage)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    QPixmap pix(":/img/images/info.png");
    int w =  ui->pamphlet_pic->width();
    int h =  ui->pamphlet_pic->height();
    ui->pamphlet_pic->setPixmap(pix.scaled(w,h));

    QPixmap pix2(":/img/images/pricing.png");
    int w2 =  ui->pricing_label->width();
    int h2 =  ui->pricing_label->height();
    ui->pricing_label->setPixmap(pix2.scaled(w2,h2));

    QPixmap pix3(":/img/images/contact.png");
    int w3 =  ui->contact_label->width();
    int h3 =  ui->contact_label->height();
    ui->contact_label->setPixmap(pix3.scaled(w3,h3));

//    QPixmap pix4(":/img/images/customer.jpg");
//    int w4 =  ui->customer_label->width();
//    int h4 =  ui->customer_label->height();
//    ui->customer_label->setPixmap(pix4.scaled(w4,h4,Qt::KeepAspectRatio));

    QPixmap pix5(":/img/images/gangnam style.jpg");
    int w5 =  ui->logo->width();
    int h5 =  ui->logo->height();
    ui->logo->setPixmap(pix5.scaled(w5,h5));
    setupReviews();
}

FrontPage::~FrontPage()
{
    delete ui;
}

/*!
 * \brief Displays "About Us" page
 */
void FrontPage::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/*!
 * \brief Displays "Contact Us" page
 */
void FrontPage::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

/*!
 * \brief Displays "Reviews" page
 */
void FrontPage::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


/*!
 * \brief Opens Admin logon window
 */
void FrontPage::on_pushButton_4_clicked()
{
    mainW->show();
}




/*!
 * \brief Displays home page
 */
void FrontPage::on_homeButton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/*!
 * \brief Displays home page
 */
void FrontPage::on_homeButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/*!
 * \brief Displays home page
 */
void FrontPage::on_homeButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    refreshWindow();
}

/*!
 * \brief opens review window
 */
void FrontPage::submitReview() {
   review = new reviewWindow();
   review->show();
}

/*!
 * \brief shows help menu
 */
void FrontPage::stopItGetSomeHelp() {
    help->show();
}

/*!
 * \brief prompts user to enter email for pamphlet
 */
void FrontPage::sendPamphlet() {
    email->show();
}
void FrontPage::orderWin() {
    order->show();
}
/*!
 * \brief prompts user to enter a review for product
 */
void FrontPage::setupReviews() {
    //QSqlQuery *query = new QSqlQuery;
    QSqlQuery query;
    QSqlRecord record;
    QSqlQueryModel *model = new QSqlQueryModel;
    QStringList temp1, temp2, temp3, temp4;
    query.prepare("SELECT CustomerName, ProductName, ReviewNumber, TextReview FROM CustomerReviews;");
    if (!query.exec())
        qDebug() << query.lastError();
    while(query.next()) {
        record = query.record();
        temp1 << record.value(0).toString();
        temp2 << record.value(1).toString();
        temp3 << record.value(2).toString();
        temp4 << record.value(3).toString();
    }
    model->setQuery(query);
    this->ui->tableView->setModel(model);
    this->ui->tableView->setColumnWidth(0, 140);
    this->ui->tableView->setColumnWidth(1, 260);
    this->ui->tableView->setColumnWidth(2, 180);
    this->ui->tableView->setColumnWidth(3, 300);
   for (int i = 0; i < model->rowCount(); ++i)
    this->ui->tableView->resizeRowToContents(i);
}

void FrontPage::refreshWindow() {
    setupReviews();
}


