#ifndef HELPMENU_H
#define HELPMENU_H

#include <QWidget>

namespace Ui {
class helpMenu;
}

class helpMenu : public QWidget
{
    Q_OBJECT

public:
    explicit helpMenu(QWidget *parent = nullptr);
    ~helpMenu();
private slots:
    void adminHelp();
    void contactHelp();
    void pamphletHelp();
    void reviewHelp();
private:
    Ui::helpMenu *ui;
};

#endif // HELPMENU_H
