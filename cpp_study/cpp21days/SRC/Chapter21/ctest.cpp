#include "ctest.h"





CTest::CTest(int n)
{
    std::cout << "ctest constructor, n=" <<n<< std::endl;
}


int CTest::operator()(const int n) const
{
    std::cout << n << "\t";
    return 0;
}
