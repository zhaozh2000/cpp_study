#include "cabstractbase.h"
#include <iostream>

CAbstractBase::CAbstractBase(int nPara)
{
    m_nVal = nPara;
}

void CAbstractBase::do2()
{
    std::cout << "CAbstractBase do2" << std::endl;
}

void CAbstractBase::doSomething2()
{
    std::cout << "CAbstractBase doSomething2" << std::endl;
}
