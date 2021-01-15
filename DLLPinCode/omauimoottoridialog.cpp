#include "omauimoottoridialog.h"
#include "ui_omauimoottoridialog.h"
#include <QDebug>

OmaUIMoottoriDialog::OmaUIMoottoriDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OmaUIMoottoriDialog)
{
    //qDebug()<<"moottori luotu"<<endl;
    ui->setupUi(this);
}

OmaUIMoottoriDialog::~OmaUIMoottoriDialog()
{
    delete ui;
    qDebug()<<"tuhottu"<<endl;
}

void OmaUIMoottoriDialog::on_pushButton1_clicked()
{
    ui->lineEditPIN->insert(QString("1"));
}

void OmaUIMoottoriDialog::on_pushButton2_clicked()
{
    ui->lineEditPIN->insert(QString("2"));
}

void OmaUIMoottoriDialog::on_pushButton3_clicked()
{
    ui->lineEditPIN->insert(QString("3"));
}

void OmaUIMoottoriDialog::on_pushButton4_clicked()
{
    ui->lineEditPIN->insert(QString("4"));
}

void OmaUIMoottoriDialog::on_pushButton5_clicked()
{
    ui->lineEditPIN->insert(QString("5"));
}

void OmaUIMoottoriDialog::on_pushButton6_clicked()
{
    ui->lineEditPIN->insert(QString("6"));
}

void OmaUIMoottoriDialog::on_pushButton7_clicked()
{
    ui->lineEditPIN->insert(QString("7"));
}

void OmaUIMoottoriDialog::on_pushButton8_clicked()
{
    ui->lineEditPIN->insert(QString("8"));
}

void OmaUIMoottoriDialog::on_pushButton9_clicked()
{
    ui->lineEditPIN->insert(QString("9"));
}

void OmaUIMoottoriDialog::on_pushButtonCancel_clicked()
{
    ui->lineEditPIN->clear();
}

void OmaUIMoottoriDialog::on_pushButton0_clicked()
{
    ui->lineEditPIN->insert(QString("0"));
}

void OmaUIMoottoriDialog::on_pushButtonOK_clicked()
{

    pin = ui->lineEditPIN->text();
    qDebug()<<pin;
    /*if(pin=="1111")
    {
        qDebug()<<"test"<<endl;
        close();
    }*/
    close();
    ui->lineEditPIN->clear();
}
