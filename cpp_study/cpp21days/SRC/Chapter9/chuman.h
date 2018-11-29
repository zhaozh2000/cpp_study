#ifndef CHUMAN_H
#define CHUMAN_H


class CHuman
{
public:
    CHuman();
    virtual ~CHuman();

    CHuman(const CHuman &copyInst);
    CHuman& operator= (const CHuman &copyInst);

    #if 1
    CHuman(CHuman &&copyInst);
    CHuman& operator= (CHuman &&copyInst);
    #endif
public:
    char *m_pcBuf;
    int m_nBufSize;
};

#endif // CHUMAN_H
