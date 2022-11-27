#include "tchar.h"
#include <iostream>
using namespace std;

// maker's code
class CTestData
{
public :
    // constructor with only one parameter can be casted
    CTestData(int nParam) : m_nData(nParam)
    {
        cout << "CTestData(int)" << endl;
    }

    CTestData(const CTestData &rhs) : m_nData(rhs.m_nData)
    {
        cout << "CTestData(const CTestData &)" << endl;
    }

    int GetData(void) const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

// user's code
// type of parameter is class and conversion construction is possible
void TestFunc(CTestData param)
{
    cout << "TestFunc() : " << param.GetData() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    // type can be casted from 'int' to 'CTestData'
    TestFunc(5);

    return 0;
}