#ifndef KORTTIUI_H
#define KORTTIUI_H

#include <QDialog>
#include "rfiddll.h"


namespace Ui {
class korttiUI;
}

class korttiUI : public QDialog
{
    Q_OBJECT

public:
    explicit korttiUI(QWidget *parent = nullptr);
    ~korttiUI();
    QString cardSerialNumber;


private:
    Ui::korttiUI *ui;



};

#endif // KORTTIUI_H
