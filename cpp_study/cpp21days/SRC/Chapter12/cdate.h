#ifndef CDATE_H
#define CDATE_H
#include<iostream>

class CDate
{
public:
    CDate(int nPara);
    CDate(const CDate &copySrcInst);
    //CDate(CDate &&copySrcInst);
    CDate& operator =(const CDate &copySrcInst);

    //CDate& operator ++();
    void operator ++();
    void operator ++(int);
    void operator *();

    int &operator [](int nIdx);
    void operator ()();

    CDate operator +(const CDate &instPara);
    bool operator ==(const CDate &instPara);

    operator const char *();
    operator int();

    void coutDay(){std::cout<<"m_nDay:"<<m_nDay<<std::endl;}

    int m_nDay;
    int m_nArrayDay[1];
};

#endif // CDATE_H
