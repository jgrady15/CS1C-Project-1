#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "header.h"
#include <QMainWindow>
#include "adminoption.h"
#include "adminwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_Login_clicked();
private:
    Ui::MainWindow *ui;
    adminOption *option;
    adminWindow *admin = new adminWindow;
};
#endif // MAINWINDOW_H
