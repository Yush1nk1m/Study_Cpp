#include <tchar.h>
#include <iostream>
using namespace std;

class CTestData
{
public :
    CTestData(int nParam) : m_nData(nParam)
    {
        cout << "CTestData(int)" << endl;
    }

    CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
    {
        cout << "CTestData(const CTestData&)" << endl;
    }

    // read-only constant type method
    int GetData() const { return m_nData; }

    // method trying to write to member variable
    void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

// copy constructor is called because parameter is CTestData class type
void TestFunc(CTestData param)
{
    cout << "TestFunc()" << endl;

    // callee function changes value of the parameter instance
    param.SetData(20);
}

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "*****  Begin   *****" << endl;
    CTestData a(10);
    cout << "a.GetData() : " << a.GetData() << endl;
    TestFunc(a);

    // print the value of a after calling function
    cout << "a.GetData() : " << a.GetData() << endl;

    cout << "*****  End *****" << endl;

    return 0;
}