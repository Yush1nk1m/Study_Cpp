#include "tchar.h"
#include <iostream>
using namespace std;

class CMyData
{
public :
    CMyData(int nParam) : m_nData(nParam) { }

    // casting
    operator int() { return m_nData; }

    // prefix increment operator
    int operator++()
    {
        cout << "operator++()" << endl;
        return ++m_nData;
    }

    // postfix increment operator
    int operator++(int)
    {
        cout << "operator++(int)" << endl;
        int nData = m_nData++;
        m_nData;

        return nData;
    }

private :
    int m_nData = 0;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a(10);

    // call prefix increment operator
    cout << ++a << endl;

    // call postfix increment operator
    cout << a++ << endl;
    cout << a << endl;

    return 0;
}