#include <tchar.h>
#include <iostream>
using namespace std;

class CTest
{
public :
    CTest(int nParam) : m_nData(nParam) { m_nCount++; }
    int GetData() { return m_nData; }
    void ResetCount() { m_nCount = 0; }

    // declaration and definition of a static method
    static int GetCount()
    {
        return m_nCount;
    };

private :
    int m_nData;

    // declaration of a static member variable (not definition)
    static int m_nCount;
};

// definition of a static member variable of CTest class
int CTest::m_nCount = 0;

int _tmain(int argc, _TCHAR* argv[])
{
    CTest a(5), b(10);

    // access to the static members
    cout << a.GetCount() << endl;
    b.ResetCount();

    // access to the static members, do not need a instance
    cout << CTest::GetCount() << endl;

    return 0;
}