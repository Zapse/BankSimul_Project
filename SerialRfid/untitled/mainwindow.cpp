#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    olioRfidDLL = new RfidDLL;
    olioRfidDLL->palautaPankkikortinNumeroKomponentti();
    connect(olioRfidDLL, SIGNAL(signaaliRpSignaali()), this, SLOT(kortinLuku()));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete olioRfidDLL;
    olioRfidDLL = NULL;
}

void MainWindow::kortinLuku()
{
    //kun kortti on paikallaan signaalilla tähän
    kortinNumero = olioRfidDLL->tulostus();
    qDebug()<<"pääohjelmassa id: "<<kortinNumero<<endl;
    //pinKysely();

}

