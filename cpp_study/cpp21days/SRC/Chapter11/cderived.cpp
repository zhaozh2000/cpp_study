#include "cderived.h"
#include <iostream>

CDerived::CDerived(int nPara):CAbstractBase(nPara)
{

}


void CDerived::doSomething()
{
    std::cout << "CDerived doSomeThing, m_nVal:" <<m_nVal << std::endl;
}



void CDerived::doSomething2()
{
    std::cout << "CDerived doSomething2, m_nVal:" <<m_nVal << std::endl;
}
