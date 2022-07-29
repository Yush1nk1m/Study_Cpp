#include "tchar.h"
#include <iostream>
using namespace std;

// maker's code
class CTestData
{
public :
    CTestData(int nParam, char* pszName) : m_nData(nParam), m_pszName(pszName)
    {
        cout << "CTestData(int) : " << m_pszName << endl;
    }

    ~CTestData()
    {
        cout << "~CTestData() : " << m_pszName << endl;
    }

    CTestData(const CTestData &rhs) : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName)
    {
        cout << "CTestData(const CTestData &) : " << m_pszName << endl;
    }

    CTestData& operator=(const CTestData &rhs)
    {
        cout << "operator = " << endl;

        // name(m_pszName) is the same as before while value is changed
        m_nData = rhs.m_nData;

        return *this;
    }

    int GetData() const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;

    // the member which is meant to store variable's name
    char* m_pszName = nullptr;
};

// the function which returns 'CTestData' object
CTestData TestFunc(int nParam)
{
    // 'a' is local variable which is an instance of 'CTestData' class
    // hence it is deleted when the function is returned
    CTestData a(nParam, "a");

    return a;
}

int _tmain(int argc, _TCHAR* argv[])
{
    CTestData b(5, "b");
    cout << "***** Before *****" << endl;

    // temporal object is created when the function is returned and deleted after assignment operation
    b = TestFunc(10);
    cout << "***** After *****" << endl;
    cout << b.GetData() << endl;

    return 0;
}