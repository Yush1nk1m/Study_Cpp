#include "tchar.h"
#include <iostream>
using namespace std;

// early developer
class CMyData
{
public :
    int GetData() { return m_nData; }

    void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

// later developer
class CMyDataEx : public CMyData
{
public :
    // override a method of the basic class
    void SetData(int nParam)
    {
        // add a new function which revises a value of input data
        if (nParam < 0)
            CMyData::SetData(0);
        
        if (nParam > 10)
            CMyData::SetData(10);
    }
};

// user code
int _tmain(int argc, _TCHAR* argv[])
{
    // there is no function which revises value in the old type
    CMyData a;
    a.SetData(-10);
    cout << a.GetData() << endl;

    // there is revision function in the new type
    CMyDataEx b;
    b.SetData(15);
    cout << b.GetData() << endl;

    return 0;
}