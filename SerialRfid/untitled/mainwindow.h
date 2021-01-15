#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include "C:\Users\sante\Desktop\serial_rfid\SerialRfid\trfidDLL\rfiddll.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void kortinLuku();
    // void timer();
signals:

private:
    Ui::MainWindow *ui;
 //   QTimer *olioTimer;
    RfidDLL *olioRfidDLL;
    bool korttiPaikallaan = true;
    QString kortinNumero;// = "0A0079C7BF";

};

#endif // MAINWINDOW_H
