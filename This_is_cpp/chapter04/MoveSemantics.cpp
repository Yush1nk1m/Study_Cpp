#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CTestData
{
public :
    CTestData() { cout << "CTestData()" << endl; }
    ~CTestData() { cout << "~CTestData()" << endl; }

    CTestData(const CTestData &rhs) : m_nData(rhs.m_nData)
    {
        cout << "CTestData(const CTestData &)" << endl;
    }

    // Move constructor
    CTestData(CTestData &&rhs) : m_nData(rhs.m_nData)
    {
        cout << "CTestData(CTestData &&)" << endl;
    }
    CTestData& operator=(const CTestData &) = default;

    int GetData() const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

CTestData TestFunc(int nParam)
{
    cout << "*** TestFunc() : Begin ***" << endl;
    CTestData a;
    a.SetData(nParam);
    cout << "*** TestFunc() : End ***" << endl;

    return a;
}

int _tmain(int argc, _TCHAR* argv[])
{
    CTestData b;
    cout << "*** Before ***" << endl;
    b = TestFunc(20);
    cout << "*** After ***" << endl;
    CTestData c(b);

    return 0;
}