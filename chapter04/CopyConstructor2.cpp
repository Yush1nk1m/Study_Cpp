#include <tchar.h>
#include <iostream>
using namespace std;

class CMyData
{
public :
    CMyData() { cout << "CMyData()" << endl; }

    int GetData(void) const { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

int _tmain(int argc, _TCHAR* argv[])
{
    // the case when default constructor is called
    CMyData a;
    a.SetData(10);

    // the case when copy constructor is called
    CMyData b(a);
    cout << b.GetData() << endl;

    return 0;
}