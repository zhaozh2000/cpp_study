#include <iostream>
#include<ctest.h>


int main(int argc, char *argv[])
{
    CTest x;
    x.m_fval = 10.0;

    try
    {
        x.m_fval = x.m_fval / 0;
    }
    catch(std::exception &excp)
    {
        std::cout << excp.what() << std::endl;
    }
    catch(...)
    {
        std::cout <<"..."<<std::endl;
    }
}
