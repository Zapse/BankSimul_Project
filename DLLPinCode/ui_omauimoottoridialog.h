/********************************************************************************
** Form generated from reading UI file 'omauimoottoridialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMAUIMOOTTORIDIALOG_H
#define UI_OMAUIMOOTTORIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_OmaUIMoottoriDialog
{
public:
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButton0;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;
    QLabel *label;
    QLineEdit *lineEditPIN;

    void setupUi(QDialog *OmaUIMoottoriDialog)
    {
        if (OmaUIMoottoriDialog->objectName().isEmpty())
            OmaUIMoottoriDialog->setObjectName(QString::fromUtf8("OmaUIMoottoriDialog"));
        OmaUIMoottoriDialog->resize(269, 419);
        OmaUIMoottoriDialog->setAutoFillBackground(false);
        pushButton1 = new QPushButton(OmaUIMoottoriDialog);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        pushButton1->setGeometry(QRect(30, 120, 61, 61));
        pushButton2 = new QPushButton(OmaUIMoottoriDialog);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setGeometry(QRect(100, 120, 61, 61));
        pushButton3 = new QPushButton(OmaUIMoottoriDialog);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        pushButton3->setGeometry(QRect(170, 120, 61, 61));
        pushButton4 = new QPushButton(OmaUIMoottoriDialog);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        pushButton4->setGeometry(QRect(30, 190, 61, 61));
        pushButton5 = new QPushButton(OmaUIMoottoriDialog);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        pushButton5->setGeometry(QRect(100, 190, 61, 61));
        pushButton6 = new QPushButton(OmaUIMoottoriDialog);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));
        pushButton6->setGeometry(QRect(170, 190, 61, 61));
        pushButton7 = new QPushButton(OmaUIMoottoriDialog);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));
        pushButton7->setGeometry(QRect(30, 260, 61, 61));
        pushButton8 = new QPushButton(OmaUIMoottoriDialog);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));
        pushButton8->setGeometry(QRect(100, 260, 61, 61));
        pushButton9 = new QPushButton(OmaUIMoottoriDialog);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));
        pushButton9->setGeometry(QRect(170, 260, 61, 61));
        pushButton0 = new QPushButton(OmaUIMoottoriDialog);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));
        pushButton0->setGeometry(QRect(100, 330, 61, 61));
        pushButtonOK = new QPushButton(OmaUIMoottoriDialog);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        pushButtonOK->setGeometry(QRect(170, 330, 61, 61));
        pushButtonCancel = new QPushButton(OmaUIMoottoriDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(30, 330, 61, 61));
        label = new QLabel(OmaUIMoottoriDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 0, 191, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        lineEditPIN = new QLineEdit(OmaUIMoottoriDialog);
        lineEditPIN->setObjectName(QString::fromUtf8("lineEditPIN"));
        lineEditPIN->setGeometry(QRect(80, 51, 113, 31));
        QFont font1;
        font1.setPointSize(14);
        lineEditPIN->setFont(font1);
        lineEditPIN->setAutoFillBackground(false);
        lineEditPIN->setMaxLength(4);
        lineEditPIN->setFrame(true);
        lineEditPIN->setEchoMode(QLineEdit::Password);
        lineEditPIN->setAlignment(Qt::AlignCenter);
        pushButton1->raise();
        pushButton2->raise();
        pushButton3->raise();
        pushButton4->raise();
        pushButton5->raise();
        pushButton6->raise();
        pushButton7->raise();
        pushButton8->raise();
        pushButton9->raise();
        pushButtonOK->raise();
        pushButtonCancel->raise();
        label->raise();
        pushButton0->raise();
        lineEditPIN->raise();

        retranslateUi(OmaUIMoottoriDialog);

        QMetaObject::connectSlotsByName(OmaUIMoottoriDialog);
    } // setupUi

    void retranslateUi(QDialog *OmaUIMoottoriDialog)
    {
        OmaUIMoottoriDialog->setWindowTitle(QApplication::translate("OmaUIMoottoriDialog", "PIN", nullptr));
        pushButton1->setText(QApplication::translate("OmaUIMoottoriDialog", "1", nullptr));
        pushButton2->setText(QApplication::translate("OmaUIMoottoriDialog", "2", nullptr));
        pushButton3->setText(QApplication::translate("OmaUIMoottoriDialog", "3", nullptr));
        pushButton4->setText(QApplication::translate("OmaUIMoottoriDialog", "4", nullptr));
        pushButton5->setText(QApplication::translate("OmaUIMoottoriDialog", "5", nullptr));
        pushButton6->setText(QApplication::translate("OmaUIMoottoriDialog", "6", nullptr));
        pushButton7->setText(QApplication::translate("OmaUIMoottoriDialog", "7", nullptr));
        pushButton8->setText(QApplication::translate("OmaUIMoottoriDialog", "8", nullptr));
        pushButton9->setText(QApplication::translate("OmaUIMoottoriDialog", "9", nullptr));
        pushButton0->setText(QApplication::translate("OmaUIMoottoriDialog", "0", nullptr));
        pushButtonOK->setText(QApplication::translate("OmaUIMoottoriDialog", "OK", nullptr));
        pushButtonCancel->setText(QApplication::translate("OmaUIMoottoriDialog", "Clear", nullptr));
        label->setText(QApplication::translate("OmaUIMoottoriDialog", "Enter Pin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OmaUIMoottoriDialog: public Ui_OmaUIMoottoriDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OMAUIMOOTTORIDIALOG_H
