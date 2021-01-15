#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include <QMainWindow>

#include "dllpincode_global.h"
#include "omauimoottoridialog.h"

class DLLPinCode: public OmaUIMoottoriDialog
{


public:

    DLLPinCode();

   void DLLPINCODESHARED_EXPORT rajapintafunktioDLLOmaUIKomponentti();


private:
   DLLPinCode *olioDLLPinCode;


};

#endif // DLLPINCODE_H
