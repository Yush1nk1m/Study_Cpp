#include "tchar.h"
#include <iostream>
using namespace std;

class CMyData
{
public :
    // declared and defined as virtual function
    virtual void PrintData()
    {
        cout << "CMyData : " << m_nData << endl;
    }

    void TestFunc()
    {
        cout << "*** TestFunc() ***" << endl;

        // real type function is called
        PrintData();
        cout << "***************" << endl;
    }

protected :
    int m_nData = 10;
};

class CMyDataEx : public CMyData
{
public :
    // redefined basic class' virtual function member
    // hence, former definition is ignored
    virtual void PrintData()
    {
        cout << "CMyDataEx : " << m_nData * 2 << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
    CMyDataEx a;
    a.PrintData();

    CMyData &b = a;

    // real type function is called regardless of reference type
    b.PrintData();

    // finally defined function is always called
    a.TestFunc();

    return 0;
}