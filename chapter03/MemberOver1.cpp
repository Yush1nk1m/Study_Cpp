#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CMyData
{
public :
    CMyData() : m_nData(0) { };

    int GetData(void) { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

    // multiple define in the case when the type of the parameter is double
    void SetData(double nParam) { m_nData = 0; }

private :
    int m_nData;
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a;

    // MyData::SetData(int) method is called
    a.SetData(10);
    cout << a.GetData() << endl;

    CMyData b;

    // CMyData::SetData(double) method is called
    b.SetData(5.5);
    cout << b.GetData() << endl;

    return 0;
}