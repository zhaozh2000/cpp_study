#ifndef CANIMALBASE_H
#define CANIMALBASE_H

#include <iostream>

class CAnimalBase
{
public:
    CAnimalBase(){std::cout << "CAnimalBase constructor" << std::endl;}
};

class CAnimalA:public virtual CAnimalBase
{
public:
    CAnimalA(){std::cout << "CAnimalA constructor" << std::endl;}
};

class CAnimalB:public virtual CAnimalBase
{
public:
    CAnimalB(){std::cout << "CAnimalB constructor" << std::endl;}
};

class CAnimalC:public virtual CAnimalBase
{
public:
    CAnimalC(){std::cout << "CAnimalC constructor" << std::endl;}
};

class CAnimalYY:public CAnimalA, public CAnimalB, public CAnimalC
{
public:
    CAnimalYY(){std::cout << "CAnimalYY constructor" << std::endl;}
};



#endif // CANIMALBASE_H
