#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CTestData
{
public :
    explicit CTestData(int nParam) : m_nData(nParam) { }

    // CTestData class can be casted into integer type
    operator int(void) { return m_nData; }

    int GetData() const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CTestData a(10);
    cout << a.GetData() << endl;

    // CTestData type can be casted into integer type
    cout << a << endl;
    cout << (int)a << endl;
    cout << static_cast<int>(a) << endl;

    return 0;
}