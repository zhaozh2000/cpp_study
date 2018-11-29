#include "cdate.h"
#include <iostream>
#include<assert.h>

CDate::CDate(int nPara)
{
    m_nDay = nPara;
    std::cout << "CDate constructor, m_nDay:" <<m_nDay <<  std::endl;

    m_nArrayDay[0] = 0;
}

//CDate::CDate(CDate &&copySrcInst)
//{

//}

CDate::CDate(const CDate &copySrcInst)
{
    m_nDay = copySrcInst.m_nDay;
    std::cout << "CDate copy constructor, m_nDay:" <<m_nDay<< std::endl;
}
CDate& CDate::operator =(const CDate &copySrcInst)
{
    m_nDay = copySrcInst.m_nDay;
    std::cout << "CDate operator = , m_nDay:" <<m_nDay<< std::endl;
    return *this;
}

CDate CDate::operator +(const CDate &instPara)
{

    std::cout <<"operator +"
             <<",this->m_nDay:"<<this->m_nDay
             <<",instPara.m_nDay:"<<instPara.m_nDay
             <<std::endl;

    return CDate(m_nDay + instPara.m_nDay);
}


int& CDate::operator [](int nIdx)
{
    std::cout << "int& CDate::operator [](int nIdx)" << std::endl;
    int nNum = sizeof(m_nArrayDay)/sizeof(int);
    if(nIdx>=0 && nIdx<nNum)
    {
        return m_nArrayDay[nIdx];
    }
    assert(0);
}

void CDate::operator ()()
{
    std::cout << "CDate::operator ()(),m_nArrayDay[0]:" << m_nArrayDay[0] <<std::endl;
}

//CDate& CDate:: operator++()
//{
//    ++m_nDay;
//    std::cout << "operator++ 1" << std::endl;
//    return *this;
//}


void CDate:: operator++()
{
    std::cout << "operator++ 2" << std::endl;
}

void CDate::operator ++(int n)
{
    std::cout << "n=" << n
              << ",operator++ 3" << std::endl;
}


bool CDate::operator ==(const CDate &instPara)
{
    if(m_nDay == instPara.m_nDay)
    {
        return true;
    }

    return false;
}

CDate::operator const char *()
{
    return "123456";
}


CDate::operator  int()
{
    m_nDay = 1001;
    return m_nDay;
}

void CDate::operator *()
{
    std::cout << "operator *" << std::endl;
}
