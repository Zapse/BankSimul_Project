#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(4);

    olioRfidDLL = new RfidDLL;
    connect(olioRfidDLL, SIGNAL(signaaliRpSignaali()), this, SLOT(pincode()));

	oDLLMySQL = new DLLMySQL;
}

MainWindow::~MainWindow()
{
    delete ui;
    qApp->quit();
}

void MainWindow::pincode()
{
    kortinNumero = olioRfidDLL->tulostus();
	
	showTilit();

    oikeaPIN = oDLLMySQL->comparePIN(kortinNumero);
    ui->label->setText(oDLLMySQL->getName(kortinNumero));
    qDebug()<<oikeaPIN<<endl;

    oDLLPinCode = new DLLPinCode;

    qDebug()<<oDLLPinCode->olioOmaUIMoottoriDialog->pin<<endl;

    while(oDLLPinCode->olioOmaUIMoottoriDialog->pin != oikeaPIN){
        qDebug()<<"Syota Pin uudestaan"<<endl;
        oDLLPinCode = new DLLPinCode;
    }

    setFonts();
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_saldoButton_clicked()
{
	ui->saldolabel->setText(oDLLMySQL->getSaldo(kortinNumero));
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_tiliButton_clicked()
{
    tilit->select();
    ui->tableView->setModel(tilit);
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_nostaButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_ulosButton_clicked()
{
    close();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

void MainWindow::on_takaisin_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_takaisin_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_takaisin_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::setFonts()
{
    QFont font = ui->label->font();
    font.setPointSize(48);
    ui->label->setFont(font);
    ui->saldolabel->setFont(font);
}

void MainWindow::on_kaksi_clicked()
{
    oDLLMySQL->withdrawMoney(kortinNumero,-20,tilinumero);
}

void MainWindow::on_viisi_clicked()
{
    oDLLMySQL->withdrawMoney(kortinNumero,-50,tilinumero);
}

void MainWindow::on_sata_clicked()
{
    oDLLMySQL->withdrawMoney(kortinNumero,-100,tilinumero);
}

void MainWindow::on_kaksisataa_clicked()
{
    oDLLMySQL->withdrawMoney(kortinNumero,-200,tilinumero);
}

void MainWindow::showTilit()
{
	tilit = new QSqlTableModel(this);
    tilit->setTable("banksimul_tilitapahtumat");

    if(kortinNumero == "0B00301548"){
        tilit->setFilter("tilinumero = 20");
        tilit->select();
        ui->tableView->setModel(tilit);
        tilinumero = 20;
    }

    if(kortinNumero == "0A00751726"){
        tilit->setFilter("tilinumero = 10");
        tilit->select();
        ui->tableView->setModel(tilit);
        tilinumero = 10;
    }

    if(kortinNumero == "0A005968A0"){
        tilit->setFilter("tilinumero = 1");
        tilit->select();
        ui->tableView->setModel(tilit);
        tilinumero = 1;
    }
}
