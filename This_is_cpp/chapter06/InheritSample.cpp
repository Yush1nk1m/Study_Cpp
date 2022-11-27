#include "tchar.h"
#include <iostream>
using namespace std;

// maker - early developer
class CMyData
{
public : // anyone can get access
    CMyData() { cout << "CMyData()" << endl; }
    int GetData() { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

protected : // only derived class can get access
    void PrintData() { cout << "CMyData::PrintData()" << endl; }

private : // no one can get access
    int m_nData = 0;
};

// maker - later developer
class CMyDataEx : public CMyData
{
public :
    CMyDataEx() { cout << "CMyDataEx()" << endl; }
    void TestFunc()
    {
        // access to the basic type member
        PrintData();
        SetData(5);
        cout << CMyData::GetData() << endl;
    }
};

// user
int _tmain(int argc, _TCHAR* argv[])
{
    CMyDataEx data;

    // access to the member of the basic class(CMyData)
    data.SetData(10);
    cout << data.GetData() << endl;

    // access to the member of the derived class(CMyDataEx)
    data.TestFunc();

    return 0;
}