#ifndef CCLONETEST_H
#define CCLONETEST_H


class CCloneTest
{
public:
    CCloneTest();
    virtual CCloneTest *clone()=0;
    virtual void doSomething() = 0;
};

class CCloneA:public CCloneTest
{
public:
    CCloneA();
    CCloneA(CCloneA& inst);
    virtual CCloneTest *clone();
    virtual void doSomething();

};

class CCloneB:public CCloneTest
{
public:
    CCloneB();
    virtual CCloneTest *clone();
    virtual void doSomething();

};

#endif // CCLONETEST_H
