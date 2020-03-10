#ifndef FRONTPAGE_H
#define FRONTPAGE_H

#include "header.h"
#include "sql_database.h"
#include "mainwindow.h"

namespace Ui { class FrontPage; }

class FrontPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrontPage(QWidget *parent = nullptr);
    ~FrontPage();

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

    void on_customerListView_entered(const QModelIndex &index);

    void on_goBackButtonAdminLogin_clicked();

    void on_goBackButtonAdminCommands_clicked();

    void on_AdminCommands_customContextMenuRequested(const QPoint &pos);

    void on_loginButton_clicked();

    void on_pushButton_5_clicked();

    void on_loadDatabaseButton_clicked();

    void on_CustomerListView_activated(const QModelIndex &index);

    void on_toolButton_clicked();

    void on_helpButtonAdminCommands_clicked();

    void on_helpButtonAdminCommands_triggered(QAction *arg1);

    void on_customerListView_activated(const QModelIndex &index);

    void on_tableView_activated(const QModelIndex &index);

    void on_AdminCommandsSaveChanges_clicked();

    void on_searchBarAdminCommands_textChanged(const QString &arg1);

private:
    Ui::FrontPage *ui;
    MainWindow *mainWindow;
};

#endif // FRONTPAGE_H
