#ifndef CSMARTPOINT_H
#define CSMARTPOINT_H

template <typename T>

class CSmartPoint
{
public:
    CSmartPoint(T *pData):m_pRawData(pData){}
    ~CSmartPoint(){delete m_pRawData;}
    T& operator *() const{return *m_pRawData;}
    T* operator ->() const{return m_pRawData;}
private:
    T *m_pRawData;
};

#endif // CSMARTPOINT_H
