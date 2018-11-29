#ifndef CDERIVED_H
#define CDERIVED_H

#include "cabstractbase.h"

class CDerived:public CAbstractBase
{
public:
    CDerived(int nPara);
    void doSomething();
    virtual void doSomething2();
};

#endif // CDERIVED_H
