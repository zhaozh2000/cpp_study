#include "chuman.h"
#include<iostream>
CHuman::CHuman()
{
    std::cout << "CHuman constructor" << std::endl;
    m_pcBuf = NULL;
    m_nBufSize = 0;
}

CHuman:: ~CHuman()
{
    if(m_pcBuf)
    {
        std::cout << "~ destructor-----------"
                  << static_cast<const void *>(m_pcBuf)
                  <<std::endl;
        delete []m_pcBuf;
    }
}


CHuman::CHuman(const CHuman &copyInst)
{
    std::cout << "CHuman copy constructor" << std::endl;
    if(copyInst.m_nBufSize > 0)
    {
        this->m_nBufSize = copyInst.m_nBufSize;
        this->m_pcBuf = new char[copyInst.m_nBufSize];
    }
    else
    {
        m_pcBuf = NULL;
        m_nBufSize = 0;
    }
}

CHuman& CHuman::operator= (const CHuman &copyInst)
{
    std::cout << "CHuman operator= " << std::endl;
    if(copyInst.m_nBufSize > 0)
    {
        this->m_nBufSize = copyInst.m_nBufSize;
        this->m_pcBuf = new char[copyInst.m_nBufSize];
    }
    else
    {
        m_pcBuf = NULL;
        m_nBufSize = 0;
    }
    return *this;
}

#if 1
CHuman& CHuman::operator= (CHuman &&copyInst)
{
    std::cout << "CHuman operator= && " << std::endl;
    this->m_pcBuf = copyInst.m_pcBuf;
    this->m_nBufSize = copyInst.m_nBufSize;

    copyInst.m_pcBuf=NULL;
    copyInst.m_nBufSize = 0;

    return *this;
}


CHuman::CHuman(CHuman &&copyInst)
{
    std::cout << "CHuman && constructor" << std::endl;

    this->m_pcBuf = copyInst.m_pcBuf;
    this->m_nBufSize = copyInst.m_nBufSize;

    copyInst.m_pcBuf=NULL;
    copyInst.m_nBufSize = 0;
}
#endif
