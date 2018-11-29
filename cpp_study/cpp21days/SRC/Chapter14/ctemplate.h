#ifndef CTEMPLATE_H
#define CTEMPLATE_H

#include<assert.h>
template <typename T>


class CTemplate
{
public:
    CTemplate(T data)
    {
        std::cout << "CTemplate constructor "<<data << std::endl;
        //static_assert(m_nVal != data, "m_nVal == data!!!");
    }
    static T m_nVal;
};

#endif // CTEMPLATE_H
