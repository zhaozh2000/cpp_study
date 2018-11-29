#include <iostream>

#include "cfish.h"
#include "ctuna.h"
#include "cabstractbase.h"
#include "cderived.h"
#include "canimalbase.h"
#include "cclonetest.h"

void deleteFish(CFish *pInstFish)
{
    delete pInstFish;
}

int main(int argc, char *argv[])
{
#if 0
    CTuna *pInstTuna = new CTuna();

    pInstTuna->swim();

    deleteFish(pInstTuna);
#endif

#if 0
    CDerived instDerive(100);
    instDerive.doSomething();
    instDerive.do2();
    instDerive.doSomething2();
#endif

#if 0
    CAnimalYY instAyy;
#endif

    CCloneA instCloneA;
    CCloneA *pInstCloneA = new CCloneA(instCloneA);
    delete pInstCloneA;
}
