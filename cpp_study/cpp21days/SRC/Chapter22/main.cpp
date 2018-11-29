#include <iostream>
#include <algorithm>
#include <vector>


int main(int argc, char *argv[])
{
    std::vector<int> vecTmp;

    vecTmp.push_back(1);
    vecTmp.push_back(2);
    vecTmp.push_back(3);
    vecTmp.push_back(4);

    std::for_each(vecTmp.begin(),
                            vecTmp.end(),
                            [](const int &element) {std::cout<<element<<std::endl;});

    std::cout << "----------------------------------------------------------------------------" << std::endl;

    auto it = std::find_if(vecTmp.cbegin(),
                                        vecTmp.cend(),
                                        [](const int &element){return (element%2==0);});
    if(it != vecTmp.cend())
    {
        std::cout << *it<<std::endl;
    }

    std::cout << "----------------------------------------------------------------------------" << std::endl;

    int x = 3,y=5;
    auto it2 = std::find_if(vecTmp.cbegin(),
                                        vecTmp.cend(),
                                        [x,y](const int &element){std::cout<<x<<","<<y<<std::endl;return (element%x==0);});
    if(it2 != vecTmp.cend())
    {
        std::cout << *it2<<std::endl;
    }
    std::cout << "----------------------------------------------------------------------------" << std::endl;

    int  i = 1000;
    auto it3 = std::find_if(vecTmp.cbegin(),
                                        vecTmp.cend(),
                                        [i](int element) mutable -> int
                                        {
                                            int xx, yy;
                                            i++;
                                            if(element%2==0)
                                                return 1;
                                            else
                                                return 2.0;
                                        });
    if(it3 != vecTmp.cend())
    {
        std::cout << *it3<<std::endl;
    }
    std::cout << "----------------------------------------------------------------------------" << std::endl;
}
