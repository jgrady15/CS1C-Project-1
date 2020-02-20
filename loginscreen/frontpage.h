#ifndef FRONTPAGE_H
#define FRONTPAGE_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class FrontPage;
}

class FrontPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrontPage(QWidget *parent = nullptr);
    ~FrontPage();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FrontPage *ui;
    MainWindow *mainWindow;
};

#endif // FRONTPAGE_H
