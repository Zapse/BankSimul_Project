#ifndef DLLMYSQL_H
#define DLLMYSQL_H

#include "DLLMySQL_global.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QApplication>
#include <QtSql>
#include <QTableView>

class DLLMYSQL_EXPORT DLLMySQL
{
public:
    DLLMySQL();
    ~DLLMySQL();
    QString comparePIN(QString cardnumber);
    QString getName(QString cardnumber);
    void withdrawMoney(QString cardnumber, int amount, int accountNumber);
    QString getSaldo(QString cardnumber);
    //void getValuesFromModel(QSqlTableModel *model);
    //QString test(QSqlTableModel *model);
    //QTableView *createView(QSqlTableModel *model, const QString &title = "");
    //QTableView *naytaTapahtumat(QSqlTableModel *tilit);

private:
    static bool createConnection();


};

#endif // DLLMYSQL_H
