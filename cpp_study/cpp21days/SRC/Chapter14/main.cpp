#include <iostream>
#include"ctest.h"
#include"ctemplate.h"

template<typename T> T CTemplate<T>::m_nVal;


int main(int argc, char *argv[])
{
    CTest::m_nVal = 10;

    CTemplate<int> inst1(10);
    CTemplate<int> inst2(20);
    CTemplate<float> inst3(100.9);
    CTemplate<int> inst4(0);
}
