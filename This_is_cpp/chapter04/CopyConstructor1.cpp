#include "tchar.h"
#include <iostream>
using namespace std;

class CMyData
{
public :
    CMyData() { cout << "CMyData()" << endl; }

    // declaration and definition of Copy Constructor
    CMyData(const CMyData &rhs)
        // : m_nData(rhs.m_nData)
    {
        this->m_nData = rhs.m_nData;
        cout << "CMyData(const CMyData &)" << endl;
    }

    int GetData(void) const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

int _tmain(int argc, _TCHAR* argv[])
{
    // the case when the default constructor is called
    CMyData a;
    a.SetData(10);

    // the case when the copy constructor is called
    CMyData b(a);
    cout << b.GetData() << endl;

    return 0;
}