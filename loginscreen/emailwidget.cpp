#include "emailwidget.h"
#include "ui_emailwidget.h"
#include "C:/Users/ALIENWARE 15 R3/Downloads/CS1C-Project-1-test_unitedpuggs/SmtpClient-for-Qt-1.1/src/SmtpMime"

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
    QString name, email, path;

    name = this->ui->nameEdit->text();
    email = this->ui->emailLine->text();
    path = dir.absolutePath();

    path.append("/Pamphlet.pdf");

    SmtpClient smtp("smtp.gmail.com", 587, SmtpClient::TlsConnection);
    smtp.setUser("burntheburns@gmail.com");
    smtp.setPassword("burnbabyburn1");

    MimeMessage message;
    message.setSender(new EmailAddress("burntheburns@gmail.com", "Team Gangnam Style"));
    message.addRecipient(new EmailAddress(email, name));
    message.setSubject("iRobot Bomb Detector Pamphlet");

    MimeText text;
    text.setText("Hey,\n\nHere's a pamphlet for our product!\n\nBest Regards,\nGangnam Style");

    MimeAttachment attachment(new QFile(path));
    message.addPart(&text);
    message.addPart(&attachment);

    if (smtp.connectToHost())
        qDebug() << "Connection to host established!";
    else
        sent.warning(this, "Connection Failed", "The connection to host has encountered an error", QMessageBox::Ok);

    if(smtp.login())
        qDebug() << "Login successful!";
    else
        sent.warning(this, "Login Failed", "An error has occurred in attemption a login", QMessageBox::Ok);

    smtp.sendMail(message);
    smtp.quit();
    sent.information(this, "Success!", "Pamphlet successfully sent!", QMessageBox::Ok);

    this->hide();
    this->ui->emailLine->setText("");
    this->ui->nameEdit->setText("");


}
