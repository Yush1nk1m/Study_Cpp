#include <tchar.h>
#include <iostream>
using namespace std;

class CTest
{
    int m_nData;

public :
    CTest()
    {
        cout << "CTest::CTest()" << endl;
    }

    ~CTest()
    {
        cout << "~CTest::CTest()" << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "Begin" << endl;

    // dynamically generate the object using new operator
    CTest* pData = new CTest;
    cout << "Test" << endl;

    // delete the new object using delete operator
    delete pData;
    cout << "End" << endl;

    return 0;
}