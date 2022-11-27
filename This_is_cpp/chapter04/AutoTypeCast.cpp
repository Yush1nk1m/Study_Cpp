<<<<<<< HEAD
#include "tchar.h"
=======
#include <tchar.h>
>>>>>>> 4431bc829c18afd39ad5ac8963b31e567f228402
#include <iostream>
using namespace std;

// maker's code
class CTestData
{
public :
    explicit CTestData(int nParam) : m_nData(nParam) { }

<<<<<<< HEAD
    // 'CTestData' class can be casted into 'int'
=======
    // CTestData class can be casted into integer type
>>>>>>> 4431bc829c18afd39ad5ac8963b31e567f228402
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

<<<<<<< HEAD
    // can be casted into 'int'
=======
    // CTestData type can be casted into integer type
>>>>>>> 4431bc829c18afd39ad5ac8963b31e567f228402
    cout << a << endl;
    cout << (int)a << endl;
    cout << static_cast<int>(a) << endl;

    return 0;
}