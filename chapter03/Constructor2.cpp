#include <tchar.h>
#include <iostream>
using namespace std;

class CTest
{
    int m_nData;

public :
    // initialize the member variable using constructor's parameter
    CTest(int nParam) : m_nData(nParam)
    {
        cout << "CTest::CTest()" << endl;
    }

    ~CTest()
    {
        // print the value passed as the parameter
        cout << "~CTest::CTest() " << m_nData << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "Begin" << endl;
    CTest a(1);
    cout << "Before b" << endl;
    CTest b(2);
    cout << "End" << endl;

    return 0;
}