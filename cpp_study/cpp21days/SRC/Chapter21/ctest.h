#ifndef CTEST_H
#define CTEST_H

#include<iostream>

class CTest
{
public:
    CTest(int n);
    int operator()(const int n) const;
    int print(){return 0;}
};

#endif // CTEST_H
