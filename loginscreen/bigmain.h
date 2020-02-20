#ifndef BIGMAIN_H
#define BIGMAIN_H

#include <QMainWindow>
#include "mainwindow.h"
#include <QTimer>

namespace Ui {
class BigMain;
}

class BigMain : public QMainWindow
{
    Q_OBJECT
public slots:
    void changeWindow();
    void buttonPressed();
public:
    explicit BigMain(QWidget *parent = 0);
    ~BigMain();

private:
    Ui::BigMain *ui;
    MainWindow *mainwindow;
    QTimer *timer;
};

#endif // BIGMAIN_H
