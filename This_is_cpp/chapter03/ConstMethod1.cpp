#include <tchar.h>
#include <iostream>
using namespace std;

class CTest
{
public :
    CTest(int nParam) : m_nData(nParam) { };
    ~CTest() { }

    // declare and define as constant type method
    int GetData() const
    {
        // be able to read the value of the member variable, but not able to write
        return m_nData;
    }

    int SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CTest a(10);
    cout << a.GetData() << endl;

    return 0;
}