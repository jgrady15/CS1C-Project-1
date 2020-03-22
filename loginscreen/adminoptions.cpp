#include "adminoptions.h"
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

void SecDialog::on_editList_pushButton_clicked() {
    admin->show();
}

void SecDialog::on_snedPamphlet_pushButton_clicked()
{
   email->show();
}