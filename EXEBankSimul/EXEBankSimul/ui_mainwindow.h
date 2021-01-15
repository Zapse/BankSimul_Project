/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *mainmenu;
    QPushButton *ulosButton;
    QPushButton *nostaButton;
    QPushButton *tiliButton;
    QPushButton *saldoButton;
    QLabel *label;
    QWidget *saldo;
    QLabel *saldolabel;
    QPushButton *takaisin;
    QWidget *tilitapahtumat;
    QTableView *tableView;
    QPushButton *takaisin_2;
    QWidget *nosta;
    QPushButton *takaisin_3;
    QPushButton *kaksi;
    QPushButton *viisi;
    QPushButton *sata;
    QPushButton *kaksisataa;
    QLabel *label_3;
    QWidget *nostakaksi;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(50, 0, 751, 551));
        mainmenu = new QWidget();
        mainmenu->setObjectName(QString::fromUtf8("mainmenu"));
        ulosButton = new QPushButton(mainmenu);
        ulosButton->setObjectName(QString::fromUtf8("ulosButton"));
        ulosButton->setGeometry(QRect(410, 300, 151, 71));
        nostaButton = new QPushButton(mainmenu);
        nostaButton->setObjectName(QString::fromUtf8("nostaButton"));
        nostaButton->setGeometry(QRect(170, 300, 141, 71));
        tiliButton = new QPushButton(mainmenu);
        tiliButton->setObjectName(QString::fromUtf8("tiliButton"));
        tiliButton->setGeometry(QRect(410, 180, 151, 71));
        saldoButton = new QPushButton(mainmenu);
        saldoButton->setObjectName(QString::fromUtf8("saldoButton"));
        saldoButton->setGeometry(QRect(170, 180, 141, 71));
        label = new QLabel(mainmenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 20, 381, 141));
        stackedWidget->addWidget(mainmenu);
        saldo = new QWidget();
        saldo->setObjectName(QString::fromUtf8("saldo"));
        saldolabel = new QLabel(saldo);
        saldolabel->setObjectName(QString::fromUtf8("saldolabel"));
        saldolabel->setGeometry(QRect(210, 110, 251, 121));
        takaisin = new QPushButton(saldo);
        takaisin->setObjectName(QString::fromUtf8("takaisin"));
        takaisin->setGeometry(QRect(270, 300, 131, 71));
        stackedWidget->addWidget(saldo);
        tilitapahtumat = new QWidget();
        tilitapahtumat->setObjectName(QString::fromUtf8("tilitapahtumat"));
        tableView = new QTableView(tilitapahtumat);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 10, 651, 431));
        takaisin_2 = new QPushButton(tilitapahtumat);
        takaisin_2->setObjectName(QString::fromUtf8("takaisin_2"));
        takaisin_2->setGeometry(QRect(260, 450, 201, 61));
        stackedWidget->addWidget(tilitapahtumat);
        nosta = new QWidget();
        nosta->setObjectName(QString::fromUtf8("nosta"));
        takaisin_3 = new QPushButton(nosta);
        takaisin_3->setObjectName(QString::fromUtf8("takaisin_3"));
        takaisin_3->setGeometry(QRect(210, 470, 311, 61));
        kaksi = new QPushButton(nosta);
        kaksi->setObjectName(QString::fromUtf8("kaksi"));
        kaksi->setGeometry(QRect(180, 140, 161, 121));
        viisi = new QPushButton(nosta);
        viisi->setObjectName(QString::fromUtf8("viisi"));
        viisi->setGeometry(QRect(380, 140, 161, 121));
        sata = new QPushButton(nosta);
        sata->setObjectName(QString::fromUtf8("sata"));
        sata->setGeometry(QRect(180, 280, 161, 121));
        kaksisataa = new QPushButton(nosta);
        kaksisataa->setObjectName(QString::fromUtf8("kaksisataa"));
        kaksisataa->setGeometry(QRect(380, 280, 161, 121));
        label_3 = new QLabel(nosta);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 10, 571, 131));
        stackedWidget->addWidget(nosta);
        nostakaksi = new QWidget();
        nostakaksi->setObjectName(QString::fromUtf8("nostakaksi"));
        label_2 = new QLabel(nostakaksi);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 200, 371, 121));
        QFont font;
        font.setPointSize(42);
        label_2->setFont(font);
        stackedWidget->addWidget(nostakaksi);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        ulosButton->setText(QApplication::translate("MainWindow", "KIRJAUDU ULOS", nullptr));
        nostaButton->setText(QApplication::translate("MainWindow", "NOSTA RAHAA", nullptr));
        tiliButton->setText(QApplication::translate("MainWindow", "SELAA TILITAPAHTUMIA", nullptr));
        saldoButton->setText(QApplication::translate("MainWindow", "N\303\204YT\303\204 SALDO", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:48pt;\">nimit\303\244h\303\244n</span></p></body></html>", nullptr));
        saldolabel->setText(QApplication::translate("MainWindow", "saldo", nullptr));
        takaisin->setText(QApplication::translate("MainWindow", "takaisin", nullptr));
        takaisin_2->setText(QApplication::translate("MainWindow", "takaisin", nullptr));
        takaisin_3->setText(QApplication::translate("MainWindow", "takaisin", nullptr));
        kaksi->setText(QApplication::translate("MainWindow", "20", nullptr));
        viisi->setText(QApplication::translate("MainWindow", "50", nullptr));
        sata->setText(QApplication::translate("MainWindow", "100", nullptr));
        kaksisataa->setText(QApplication::translate("MainWindow", "200", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:28pt;\">Valitse haluamasi summa</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Sy\303\266t\303\244 kortti", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
