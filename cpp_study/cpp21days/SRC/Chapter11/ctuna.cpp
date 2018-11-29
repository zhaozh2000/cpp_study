#include "ctuna.h"
#include <iostream>

CTuna::CTuna()
{
    std::cout << "CTuna constructor" << std::endl;
}

CTuna::~CTuna()
{
    std::cout << "CTuna destructor" << std::endl;
}

void CTuna::swim()
{
    std::cout << "CTuna swim" << std::endl;
}
