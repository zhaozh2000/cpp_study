#ifndef CABSTRACTBASE_H
#define CABSTRACTBASE_H

//抽象基类
class CAbstractBase
{
public:
    CAbstractBase(int nPara);
    virtual void doSomething() = 0;
    void do2();
    virtual void doSomething2();
public:
    int m_nVal;
};

#endif // CABSTRACTBASE_H
