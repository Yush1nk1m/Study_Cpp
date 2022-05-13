#include <tchar.h>
#include <iostream>
using namespace std;

class CTest
{
public :
    // declaration of the default constructor
    CTest(void);
    int m_nData = 5;
};

// definition of the default constructor outside of the class
CTest::CTest(void) { }

int _tmain(int argc, _TCHAR* argv[])
{
    CTest a;
    cout << a.m_nData << endl;

    return 0;
}