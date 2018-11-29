#include <iostream>
#include<algorithm>
#include<vector>
#include"ctest.h"

void print(int n)
{
    std::cout << n << "\t";
}


template <typename TT>
struct tagTest
{
    tagTest(){std::cout<<"tagTest constructor"<<std::endl;}
    void operator()(TT n){std::cout<<n<<std::endl;}
    void operator()(TT n, TT m){std::cout<<n<<","<<m<<std::endl;}
};



int main(int argc, char *argv[])
{
    std::vector<int> vecTmp;
    vecTmp.push_back(10);
    vecTmp.push_back(20);
    vecTmp.push_back(30);

    std::for_each(vecTmp.begin(), vecTmp.end(), print);
    std::cout << "================"<<std::endl;

    CTest a(1);
    CTest(2);

    std::for_each(vecTmp.begin(), vecTmp.end(), a);
    std::cout << "================"<<std::endl;
    std::for_each(vecTmp.begin(), vecTmp.end(), CTest(1));
    std::cout << "================"<<std::endl;


    std::for_each(vecTmp.begin(), vecTmp.end(), tagTest<int>());
    std::cout << "================"<<std::endl;
}
