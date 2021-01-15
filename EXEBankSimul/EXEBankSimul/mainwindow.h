#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "C:\Users\sante\Downloads\project\DLLMySQL\dllmysql.h"
#include "C:\Users\sante\Downloads\project\DLLPinCode\dllpincode.h"
#include "C:\Users\sante\Downloads\project\SerialRfid\trfidDLL\rfiddll.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
	void showTilit();

private slots:

    void on_saldoButton_clicked();

    void on_tiliButton_clicked();

    void on_nostaButton_clicked();

    void on_ulosButton_clicked();

    void on_takaisin_2_clicked();

    void on_takaisin_clicked();

    void on_takaisin_3_clicked();

    void on_kaksi_clicked();

    void on_viisi_clicked();

    void on_sata_clicked();

    void on_kaksisataa_clicked();

    void pincode();

private:
    Ui::MainWindow *ui;
    DLLMySQL *oDLLMySQL;
    DLLPinCode *oDLLPinCode;
    void setFonts();
    RfidDLL *olioRfidDLL;
    bool korttiPaikallaan = true;
    QString kortinNumero;
    QString oikeaPIN;
    int tilinumero;
    QSqlTableModel *tilit;
};
#endif // MAINWINDOW_H
