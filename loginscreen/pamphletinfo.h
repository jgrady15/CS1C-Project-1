#ifndef PAMPHLETINFO_H
#define PAMPHLETINFO_H

#include <QWidget>

namespace Ui {
class pamphletInfo;
}

class pamphletInfo : public QWidget
{
    Q_OBJECT
private slots:
    void refresh();
public:
    explicit pamphletInfo(QWidget *parent = nullptr);
    ~pamphletInfo();

private:
    void setupPage();
    Ui::pamphletInfo *ui;
};

#endif // PAMPHLETINFO_H
