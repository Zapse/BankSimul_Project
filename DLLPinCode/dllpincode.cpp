#include "dllpincode.h"
#include <QApplication>
#include <QDebug>


DLLPinCode::DLLPinCode()
{
    olioOmaUIMoottoriDialog = new OmaUIMoottoriDialog;
    olioOmaUIMoottoriDialog->exec();
}


