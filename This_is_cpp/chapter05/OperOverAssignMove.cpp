#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CMyData
{
public :
    explicit CMyData(int nParam)
    {
        cout << "CMyData(int)" << endl;
        m_pnData = new int(nParam);
    }

    CMyData(const CMyData &rhs)
    {
        cout << "CMyData(const CMyData &)" << endl;
        m_pnData = new int(*rhs.m_pnData);
    }

    ~CMyData() { delete m_pnData; }

    operator int() { return *m_pnData; }

    // complex definition of addition operator
    CMyData operator+(const CMyData &rhs)
    {
        // temporal object is created in the caller function
        return CMyData(*m_pnData + *rhs.m_pnData);
    }

    // complex definition of simple assignment operator
    CMyData& operator=(const CMyData &rhs)
    {
        cout << "operator=" << endl;
        if (this == &rhs)
            return *this;

        delete m_pnData;
        m_pnData = new int(*rhs.m_pnData);

        return *this;
    }

    // complex definition of move assignment operator
    CMyData& operator=(CMyData &&rhs)
    {
        cout << "operator=(Move)" << endl;

        // conduct shallow copy and initialize original object with NULL
        m_pnData = rhs.m_pnData;
        rhs.m_pnData = NULL;

        return *this;
    }

private :
    int *m_pnData = nullptr;
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a(0), b(3), c(4);
    cout << "*** Before ***" << endl;

    // move constructor is executed
    a = b + c;
    cout << "*** After ***" << endl;
    cout << a << endl;
    a = b;
    cout << a << endl;

    return 0;
}