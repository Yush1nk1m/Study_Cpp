#include <tchar.h>
#include <iostream>
using namespace std;

class CMyData
{
public :
    CMyData(int nParam)
    {
        m_pnData = new int;
        *m_pnData = nParam;
    }

    // declaration and definition of copy constructor
    CMyData(const CMyData& rhs)
    {
        cout << "CMyData(const CMyData&)" << endl;

        // allocate memory
        m_pnData = new int;

        // copy the value where the pointer points
        *m_pnData = *rhs.m_pnData;
    }

    // free the memory when the object is destructed
    ~CMyData()
    {
        delete m_pnData;
    }

    int GetData()
    {
        if (m_pnData != NULL)
            return *m_pnData;

        return 0;
    }

private :
    // pointer member data
    int* m_pnData = nullptr;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a(10);
    CMyData b(a);

    cout << a.GetData() << endl;
    cout << b.GetData() << endl;

    return 0;
}