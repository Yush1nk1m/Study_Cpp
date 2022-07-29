#include "tchar.h"
#include <iostream>
using namespace std;

// maker's code
class CTestData
{
public :
    explicit CTestData(int nParam) : m_nData(nParam) { }

    // 'CTestData' class can be casted into 'int'
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

    // can be casted into 'int'
    cout << a << endl;
    cout << (int)a << endl;
    cout << static_cast<int>(a) << endl;

    return 0;
}