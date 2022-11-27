#include <tchar.h>
#include <iostream>
using namespace std;

class CMyData
{
public :
    // there is no default constructor
    // declaration and definition of the constructor function with one int type parameter
    CMyData(int nParam) : m_nData(nParam) { };

    // multiple definition of the constructor function with two int type parameter
    CMyData(int x, int y) : m_nData(x + y) { };

    int GetData(void) { return m_nData; }

private :
    int m_nData;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a(10);
    CMyData b(3, 4);

    cout << a.GetData() << endl;
    cout << b.GetData() << endl;

    return 0;
}