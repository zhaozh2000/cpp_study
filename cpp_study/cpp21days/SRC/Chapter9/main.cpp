#include <iostream>
#include "chuman.h"


CHuman copy()
{
    CHuman instHuman;
    instHuman.m_nBufSize = 3200;
    instHuman.m_pcBuf = new char[3200];
    std::cout << "copy -----------"
              << static_cast<const void *>(instHuman.m_pcBuf)
              <<std::endl;
    return instHuman;
}

int main(int argc, char *argv[])
{
#if 1
    CHuman instHuman1;
    std::cout << "splite line 1-----------" << std::endl;

    CHuman *pInstHuman = new CHuman(instHuman1);
    std::cout << "splite line  2-----------" << std::endl;

    CHuman InstHuman2;
    std::cout << "splite line  3-----------" << std::endl;
    InstHuman2 = instHuman1;
    std::cout << "splite line  4-----------" << std::endl;

    CHuman InstHuman4 = instHuman1;
    std::cout << "splite line  5-----------" << std::endl;


    CHuman *pInstHuman6 = new CHuman(copy());
    std::cout << "splite line  6-----------" << std::endl;
#endif
    CHuman InstHuman7 = copy();
    std::cout << "splite line  7-----------" << std::endl;
#if 1
    CHuman InstHuman8;
    InstHuman8 = copy();
    std::cout << "splite line  8-----------" << std::endl;
#endif

    delete pInstHuman6;
    delete pInstHuman;
}
