#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CTest
{
public :
    // initialize members using generator initialize category
    CTest() { }

    // we are able to initialize and declaration the member variable simultaneously from C++11
    int m_nData1 = 10;
    int m_nData2 = 20;

    void PrintData(void)
    {
        cout << m_nData1 << endl;
        cout << m_nData2 << endl;
    }
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CTest t;
    t.PrintData();

    return 0;
}