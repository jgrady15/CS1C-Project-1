#ifndef FRONTPAGE_H
#define FRONTPAGE_H

#include <QMainWindow>
#include "loginwindow.h"
#include "reviewwindow.h"

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

    void on_homeButton_1_clicked();

    void on_homeButton_2_clicked();

    void on_homeButton_3_clicked();

    void submitReview();
private:
    Ui::FrontPage *ui;
    MainWindow *mainWindow;
    reviewWindow *review = new reviewWindow();
};

#endif // FRONTPAGE_H
