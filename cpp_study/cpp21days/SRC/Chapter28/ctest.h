#ifndef CTEST_H
#define CTEST_H

#include <exception>

class CTest:public std::exception
{
public:
    CTest();
    virtual const char* what() const throw();
    float m_fval;
};

#endif // CTEST_H
