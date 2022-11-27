#include <tchar.h>
#include <iostream>
using namespace std;

class CTest
{
public :
    CTest(int nParam) : m_nData(nParam) { };
    ~CTest() { }

    // declared and defined as the constant type method
    int GetData() const
    {
        // even the constant type method can write a value on the mutable member 
        m_nData = 20;
        return m_nData;
    }

    int SetData(int nParam) { m_nData = nParam; }

private :
    mutable int m_nData = 0;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CTest a(10);
    cout << a.GetData() << endl;

    return 0;
}