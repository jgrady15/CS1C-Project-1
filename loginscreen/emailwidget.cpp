#include "emailwidget.h"
#include "ui_emailwidget.h"
#include <QDir>
#include <QMessageBox>
#include "./src/SmtpMime"

emailWidget::emailWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::emailWidget)
{
    ui->setupUi(this);
    //this->ui->sendButton->connect(this->ui->emailLine, SIGNAL(returnPressed()), this, SLOT(sendPamphlet()));
}

emailWidget::~emailWidget()
{
    delete ui;
}

void emailWidget::sendPamphlet() {
    QDir dir;
    QMessageBox sent;
    QString name = this->ui->nameEdit->text();
    QString email = this->ui->emailLine->text();
    QString path = dir.absolutePath();
    path.append("/Pamphlet.pdf");
    SmtpClient smtp("smtp.gmail.com", 587, SmtpClient::TlsConnection);
    smtp.setUser("burntheburns@gmail.com");
    smtp.setPassword("burnbabyburn1");
    MimeMessage message;
    message.setSender(new EmailAddress("burntheburns@gmail.com", "Mr. Burns"));
    message.addRecipient(new EmailAddress(email, name));
    message.setSubject("iRobot Bomb Detector Pamphlet");
    MimeText text;
    text.setText("Hey,\n\nHere's a pamphlet for our product!\n\nBest Regards,\nGangnam Style");
    MimeAttachment attachment(new QFile(path));
    message.addPart(&text);
    message.addPart(&attachment);
    if (smtp.connectToHost()) {
        qDebug() << "Connection to host established!";
    }
    else {
        sent.warning(this, "Connection Failed", "The connection to host has encountered an error", QMessageBox::Ok);
    }
    if(smtp.login()) {
        qDebug() << "More Epic";
    }
    else {
        sent.warning(this, "Login Failed", "An error has occurred in attemption a login", QMessageBox::Ok);
    }
    smtp.sendMail(message);
    smtp.quit();
    sent.information(this, "Success!", "Pamphlet successfully sent!", QMessageBox::Ok);
    this->destroy();
}
