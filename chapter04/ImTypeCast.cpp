#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CTestData
{
public :
    // constructor with only one parameter can be casted
    explicit CTestData(int nParam) : m_nData(nParam)
    {
        cout << "CTestData(int)" << endl;
    }

    CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
    {
        cout << "CTestData(const CTestData&)" << endl;
    }

    ~CTestData()
    {
        cout << "~CTestData()" << endl;
    }

    int GetData() const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

// user's code
// parameter is reference type of the class and implicitly converted
void TestFunc(const CTestData& param)
{
    cout << "TestFunc() : " << param.GetData() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    // can be casted int type to CTestData type
    TestFunc(CTestData(5));

    return 0;
}