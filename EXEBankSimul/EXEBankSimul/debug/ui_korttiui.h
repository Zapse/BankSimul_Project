/********************************************************************************
** Form generated from reading UI file 'korttiui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KORTTIUI_H
#define UI_KORTTIUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_korttiUI
{
public:
    QLabel *label;

    void setupUi(QDialog *korttiUI)
    {
        if (korttiUI->objectName().isEmpty())
            korttiUI->setObjectName(QString::fromUtf8("korttiUI"));
        korttiUI->resize(400, 300);
        label = new QLabel(korttiUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 80, 241, 141));

        retranslateUi(korttiUI);

        QMetaObject::connectSlotsByName(korttiUI);
    } // setupUi

    void retranslateUi(QDialog *korttiUI)
    {
        korttiUI->setWindowTitle(QApplication::translate("korttiUI", "Dialog", nullptr));
        label->setText(QApplication::translate("korttiUI", "<html><head/><body><p><span style=\" font-size:24pt;\">Sy\303\266t\303\244 kortti</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class korttiUI: public Ui_korttiUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KORTTIUI_H
