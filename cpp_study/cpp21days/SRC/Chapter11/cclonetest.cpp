#include "cclonetest.h"
#include <iostream>


CCloneTest::CCloneTest()
{

}

CCloneA::CCloneA(CCloneA& inst)
{
    std::cout << "& CCloneA::CCloneA()" << std::endl;
}

CCloneA::CCloneA()
{
    std::cout << "CCloneA::CCloneA()" << std::endl;
}

void CCloneA::doSomething()
{

}

CCloneTest *CCloneA::clone()
{
    return new CCloneA(*this);
}

CCloneB::CCloneB()
{

}

void CCloneB::doSomething()
{

}


CCloneTest *CCloneB::clone()
{
    return new CCloneB(*this);
}
