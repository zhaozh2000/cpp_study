#include <iostream>
#include "cdate.h"
#include "csmartpoint.h"

int main(int argc, char *argv[])
{
#if 0
    CDate instDate;
    ++instDate;
    instDate++;

    *instDate;

    std::cout << (const char *)instDate << std::endl
              << (int)instDate
              << std::endl;

    CSmartPoint<int> pDynamicData(new int(42));
    std::cout << *pDynamicData << std::endl;

    CSmartPoint<CDate> pDate(new CDate());
    pDate->m_nDay = 2000;
    std::cout << pDate->m_nDay << std::endl;
#endif

    CDate instDate1(1000);
    CDate instDate2(2000);
#if 0
    CDate instDate3 = instDate1;
    CDate instDate4(instDate1);
    //CDate instDate5(instDate1);

    std::cout << static_cast<const void *>(&instDate4.m_nDay) << std::endl;
    std::cout << static_cast<const void *>(&(instDate4 = instDate2).m_nDay) << std::endl;
#endif
    CDate instDate6 = instDate1+instDate2;
    instDate6.coutDay();                  // to check

    if(instDate1 == instDate2)
    {
        std::cout << "instDate1 == instDate2" << std::endl;
    }
    else
    {
        std::cout << "instDate1 != instDate2" << std::endl;
    }

    instDate1();

    instDate1[0] = 10000;

    instDate1();

    instDate1[1] = 20000;
}
