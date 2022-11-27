#include "tchar.h"
#include <iostream>
using namespace std;

class CMyData
{
public :
    CMyData() { }
    virtual ~CMyData() { }
    void SetData(int nParam) { m_nData = nParam; }
    int GetData() { return m_nData; }

private :
    int m_nData = 0;
};

class CMyDataEx : public CMyData
{
public :
    void SetData(int nParam)
    {
        if (nParam > 10)
            nParam = 10;

        CMyData::SetData(nParam);
    }

    void PrintData()
    {
        cout << "PrintData() : " << GetData() << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
    // point derived type object to basic type
    CMyData* pData = new CMyDataEx;
    CMyDataEx* pNewData = NULL;

    // call function CMyData::SetData()
    // hence not test whether over 10 or not
    pData->SetData(15);

    // pointer of basic type but pointing object is derived type
    // hence try to static_cast to derived type
    pNewData = static_cast<CMyDataEx*>(pData);
    pNewData->PrintData();
    delete pData;

    return 0;
}