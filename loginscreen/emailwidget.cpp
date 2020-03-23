#include "emailwidget.h"
#include "ui_emailwidget.h"
#include <QDir>
#include <QMessageBox>
#include "./src/SmtpMime"

/**
 * @brief Constructor for emailWidget
 * @param parent
 */
emailWidget::emailWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::emailWidget)
{
    ui->setupUi(this);
    //this->ui->sendButton->connect(this->ui->emailLine, SIGNAL(returnPressed()), this, SLOT(sendPamphlet()));
}

/**
 * @brief Destructor for emailWidget
 */
emailWidget::~emailWidget()
{
    delete ui;
}

/**
 * @brief Connects to Google's SMTP server for Gmail using their Tls socket.
 *        Sends an email to whomever you choose (no email discrimination) with
 *        our product's pamphlet attached.
 */
void emailWidget::sendPamphlet() {
    QMessageBox sent;
    QString name = this->ui->nameEdit->text();
    QString email = this->ui->emailLine->text();
    SmtpClient smtp("smtp.gmail.com", 587, SmtpClient::TlsConnection);
    smtp.setUser("burntheburns@gmail.com");
    smtp.setPassword("burnbabyburn1");
    MimeMessage message;
    message.setSender(new EmailAddress("burntheburns@gmail.com", "Team Gangnam Style"));
    message.addRecipient(new EmailAddress(email, name));
    message.setSubject("iRobot Bomb Detector Pamphlet");
    MimeText text;
    text.setText("Hey,\n\nHere's a pamphlet for our product!\n\nBest Regards,\nGangnam Style");
    MimeAttachment attachment(new QFile(":/Pamphlet.pdf"));
    message.addPart(&text);
    message.addPart(&attachment);
    if (smtp.connectToHost()) {
        qDebug() << "Connection to host established!";
    }
    else {
        sent.warning(this, "Connection Failed", "The connection to host has encountered an error", QMessageBox::Ok);
    }
    if(smtp.login()) {
        qDebug() << "Login successful!";
    } else {
        sent.warning(this, "Login Failed", "An error has occurred in attemption a login", QMessageBox::Ok);
    }
    smtp.sendMail(message);
    smtp.quit();
    sent.information(this, "Success!", "Pamphlet successfully sent!", QMessageBox::Ok);
    this->hide();
    this->ui->emailLine->setText("");
    this->ui->nameEdit->setText("");
}
