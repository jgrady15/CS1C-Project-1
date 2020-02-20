#include "secdialog.h"
#include "ui_secdialog.h"
#include <QMessageBox>

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_customerList_pushButton_clicked()
{
    QMessageBox::information(this, "not built yet", "customer listing");
}

void SecDialog::on_editList_pushButton_clicked()
{
    QMessageBox::information(this, "not built yet", "edit listing");
}

void SecDialog::on_snedPamphlet_pushButton_clicked()
{
    QMessageBox::information(this, "not built yet", "send pamphlets");
}
