#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CTest
{
public :
    CTest()
    {
        m_nData = 10;
    }

    int m_nData;

    void PrintData(void);
};

void CTest::PrintData(void)
{
    cout << m_nData << endl;
}

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CTest t;
    t.PrintData();

    return 0;
}