#ifndef OMAUIMOOTTORIDIALOG_H
#define OMAUIMOOTTORIDIALOG_H

#include <QDialog>

namespace Ui {
class OmaUIMoottoriDialog;
}

class OmaUIMoottoriDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OmaUIMoottoriDialog(QWidget *parent = 0);
    ~OmaUIMoottoriDialog();
    OmaUIMoottoriDialog *olioOmaUIMoottoriDialog;
    QString pin;

private slots:

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButtonCancel_clicked();

    void on_pushButton0_clicked();

    void on_pushButtonOK_clicked();

private:
    Ui::OmaUIMoottoriDialog *ui;
};

#endif // OMAUIMOOTTORIDIALOG_H
