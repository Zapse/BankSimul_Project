#include "korttiui.h"
#include "ui_korttiui.h"

korttiUI::korttiUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::korttiUI)
{
    ui->setupUi(this);
}

korttiUI::~korttiUI()
{
    close();
    delete ui;
}


