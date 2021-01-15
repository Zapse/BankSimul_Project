#include "dllmysql.h"
#include <QWidget>
#include <QApplication>
#include <QtWidgets>
#include <QtSql>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>

DLLMySQL::DLLMySQL()
{
    createConnection();
}

DLLMySQL::~DLLMySQL()
{

}

bool DLLMySQL::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("host_name");
    db.setDatabaseName("database_name");
    db.setUserName("Username");
    db.setPassword("Password");
    db.open();
    if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
        qApp->tr("Unable to establish a database connection.\n"),
        QMessageBox::Cancel);
        return false;
    }
}

QString DLLMySQL::comparePIN(QString cardnumber)
{
    QSqlQuery pinTest("SELECT pin FROM banksimul_pin WHERE rfid = ?");
    pinTest.addBindValue(cardnumber);
    pinTest.exec();
    pinTest.first();
    return pinTest.value(0).toString();
}

QString DLLMySQL::getName(QString cardnumber)
{
    QSqlQuery nimiTest("SELECT etunimi FROM banksimul WHERE rfid = ?");
    nimiTest.addBindValue(cardnumber);
    nimiTest.exec();
    nimiTest.first();
    return nimiTest.value(0).toString();
}

void DLLMySQL::withdrawMoney(QString cardnumber, int amount, int accountNumber)
{
    QSqlQuery miinus("SELECT saldo FROM banksimul_tili WHERE rfid = ?");
    miinus.addBindValue(cardnumber);
    miinus.exec();
    miinus.first();
    int saldo = miinus.value(0).toInt();
    int tulos = saldo + amount;
    QSqlQuery laita;
    laita.prepare("UPDATE banksimul_tili SET saldo = :saldo where rfid = :rfid");
    laita.bindValue(":saldo", tulos);
    laita.bindValue(":rfid", cardnumber);
    laita.exec();
    laita.first();
    qDebug()<<tulos<<endl;
    QSqlQuery historia;
    historia.prepare("INSERT into banksimul_tilitapahtumat (tilinumero, pvm, summa) values (:number, now(), :amount)");
    historia.bindValue(":number", accountNumber);
    historia.bindValue(":amount", amount);
    historia.exec();
    historia.first();
}

QString DLLMySQL::getSaldo(QString cardnumber)
{
    QSqlQuery saldoTest("SELECT saldo FROM banksimul_tili WHERE rfid = ?");
    saldoTest.addBindValue(cardnumber);
    saldoTest.exec();
    saldoTest.first();
    return saldoTest.value(0).toString();
}

/*void DLLMYSQL_EXPORT DLLMySQL::getValuesFromModel(QSqlTableModel *model)
{
    model->setTable("person");

    //model->setFilter("firstname = 'Lars'");

    model->select();

    QString id = model->data(model->index(0,0)).toString();
    QString etu = model->data(model->index(2,1)).toString();
    QString suku = model->data(model->index(0,2)).toString();

    qDebug() <<id;
    qDebug() <<etu;
    qDebug() <<suku;

    //kayta QSqlTableModel::record() -kaskya
    //Lisaa yksi rivi (record) tietokantatauluun insertRow() -kaskylla, joka luo
    //tyhjan rivin (record), sitten jokaiseen kenttaan (column) rivilla asetetaan arvo setData() kaskylla.

    //int row = 5;
    //model->insertRows(row, 1);
    //asetuksien j�lkeen submitAll() k�sky vasta toteuttaa rivin.

    //TEHT�V� osa 2
    //for (int i = 0; i < model->rowCount(); ++i) {
    //    qDebug() << model->record(i);
    //}

    //model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    //model->setHeaderData(1, Qt::Horizontal, QObject::tr("First name"));
    //model->setHeaderData(2, Qt::Horizontal, QObject::tr("Last name"));
}*/

/*QTableView *createView(QSqlTableModel *model, const QString &title = "")
{
    QTableView *view = new QTableView;
    view->setModel(model);
    view->setWindowTitle(title);
    return view;
}*/

/*QString DLLMYSQL_EXPORT DLLMySQL::test(QSqlTableModel *model)
{
    model->setTable("banksimul");
    model->select();
    QString etu = model->data(model->index(0,1)).toString();
    return etu;
}*/

/*QTableView *naytaTapahtumat(QSqlTableModel *tilit)
{
    tilit->setTable("banksimul_tilitapahtumat");
    tilit->select();
    QTableView *view = new QTableView;
    view->setModel(tilit);
    //QTableView *view1 = createView(&model, QObject::tr("Table Model (View 1)"));
    //view1->show();
    return view;
}*/
