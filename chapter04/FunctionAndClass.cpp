#include "tchar.h"
#include <iostream>
using namespace std;

class CTestData
{
public :
    CTestData(int nParam) : m_nData(nParam)
    {
        cout << "CTestData(int)" << endl;
    }

    CTestData(const CTestData &rhs) : m_nData(rhs.m_nData)
    {
        cout << "CTestData(const CTestData &)" << endl;
    }

    // read-only const method
    int GetData() const { return m_nData; }

    // a method which tries to write to member variable
    void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

// copy constructor is called because parameter's type is class 'CTestData'
void TestFunc(CTestData &param)
{
    cout << "TestFunc()" << endl;

    // callee function modifies value of parameter instance
    param.SetData(20);
}

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "***** BEGIN *****" << endl;
    CTestData a(10);
    TestFunc(a);

    // print a value of 'a' after a function call
    cout << "a : " << a.GetData() << endl;

    cout << "***** END *****" << endl;

    return 0;
}