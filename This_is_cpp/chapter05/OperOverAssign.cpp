#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CMyData
{
public :
    explicit CMyData(int nParam)
    {
        m_pnData = new int(nParam);
    }

    ~CMyData() { delete m_pnData; }

    operator int() { return *m_pnData; }

    // overloading of simple assignment operator
    void operator=(const CMyData &rhs)
    {
        // if r-value equals with l-value, assignment operation is not conducted
        if (this == &rhs)
            return;
        
        // delete originally pointed memory
        delete m_pnData;

        // store value to newly allocated memory
        m_pnData = new int(*rhs.m_pnData);
    }

private :
    int *m_pnData = nullptr;
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a(0), b(5);
    a = b;
    cout << a << endl;

    return 0;
}