#include <iostream>

class CBaseFish
{
    public:
        CBaseFish(int nParaA, int nParaB, int nParaC);
        void printBaseFish();
        int m_nA;
    protected:
        int m_nB;
    private:
        void printBaseFishPrivate();
        int m_nC;
};

void CBaseFish::printBaseFishPrivate()
{
    std::cout << "CBaseFish::printBaseFishPrivate, "
              << "m_nC:" << m_nC
              << std::endl;
}

void CBaseFish::printBaseFish()
{
    std::cout << "CBaseFish::printBaseFish, "
              << "m_nA:"<< m_nA
              << " ,m_nB:"<< m_nB
              << " ,m_nC:" << m_nC
              << std::endl;

}

class CFishA:public CBaseFish
{
public:
    CFishA(int nParaA, int nParaB, int nParaC);
    void printTest();
};

class CFishB:protected CBaseFish
{
    //friend class CFriendTest;
public:
    CFishB(int nParaA, int nParaB, int nParaC);
    void printTest();
};

class CFishC:private CBaseFish
{
    //friend class CFriendTest;
public:
    CFishC(int nParaA, int nParaB, int nParaC);
    void printTest();
};



class CFishD:public CFishA,public CFishB, public CFishC
{

public:
    friend class CFriendTest;
    CFishD();
    int m_nD1;
protected:
    int m_nD2;
private:
    int m_nD3;
};

class CFriendTest
{
public:
    CFriendTest();
    CFishD m_instFishD;
    void testFriend1(){std::cout<<m_instFishD.CFishA::m_nA;}
    void testFriend2(){std::cout<<m_instFishD.m_nD1;}
    void testFriend3(){std::cout<<m_instFishD.m_nD2;}
    void testFriend4(){std::cout<<m_instFishD.m_nD3;}
    void testFriend5(){std::cout<<m_instFishD.CFishA::m_nB;}
    void testFriend6(){std::cout<<m_instFishD.CFishB::m_nB;}
    //void testFriend7(){std::cout<<"testFriend6:"<<m_instFishD.CFishB::m_nC;}
};


CFriendTest::CFriendTest()
{

}

CFishD::CFishD():CFishA(1,2,3),CFishB(4,5,6),CFishC(7,8,9)
{
    std::cout<<"CFishD Constructor"<<std::endl;
}

CBaseFish::CBaseFish(int nParaA, int nParaB, int nParaC)
{
    m_nA = nParaA;
    m_nB = nParaB;
    m_nC = nParaC;
}

CFishA::CFishA(int nParaA, int nParaB, int nParaC):CBaseFish (nParaA,nParaB,nParaC)
{
    std::cout<<"CFishA Constructor"<<std::endl;
}

CFishB::CFishB(int nParaA, int nParaB, int nParaC):CBaseFish (nParaA,nParaB,nParaC)
{
    std::cout<<"CFishB Constructor"<<std::endl;
}

CFishC::CFishC(int nParaA, int nParaB, int nParaC):CBaseFish (nParaA,nParaB,nParaC)
{
    std::cout<<"CFishC Constructor"<<std::endl;
}


void CFishA::printTest()
{
    std::cout << "CFishA::printTest, m_nA:" << m_nA
              << " ,m_nB:" << m_nB << std::endl;
    printBaseFish();
    //printBaseFishPrivate();
}

void CFishB::printTest()
{
    std::cout << "CFishB::printTest, m_nA:" << m_nA
              << " ,m_nB:" << m_nB << std::endl;
    printBaseFish();
    //printBaseFishPrivate();
}

void CFishC::printTest()
{
    std::cout << "CFishC::printTest, m_nA:" << m_nA
              << " ,m_nB:" << m_nB << std::endl;
    printBaseFish();
    //printBaseFishPrivate();
}

int main(int argc, char *argv[])
{
    //CFishA instA(1,2,3);
    //instA.printTest();
    //instA.m_nB;

    //CFishB instB(1,2,3);
    //instB.printTest();
    //instB.m_nA;

    //CFishC instC(1,2,3);
    //instC.printTest();
    //instC.m_nA;

    //CFishD instD;

    CFriendTest instFrientTest ;
    instFrientTest.testFriend6();

    std::cout<<std::endl;
}
