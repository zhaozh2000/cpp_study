#include "cfish.h"
#include <iostream>

CFish::CFish()
{
    std::cout << "CFish constructor" << std::endl;
}

CFish::~CFish()
{
    std::cout << "CFish destructor" << std::endl;
}

void CFish::swim()
{
    std::cout << "Cfish swim" << std::endl;
}
