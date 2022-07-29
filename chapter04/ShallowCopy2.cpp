#include "tchar.h"
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
    CMyData(const CMyData &rhs)
    {
        cout << "CMyData(const CMyData &)" << endl;

        // allocate memory
        m_pnData = new int;

        // copy value to the place where the pointer points
        *m_pnData = *rhs.m_pnData;
    }

    // delete dynamically allocated memory when the object is deleted
    ~CMyData()
    {
        delete m_pnData;
    }

    // definition of simple assignment operator
    CMyData& operator=(const CMyData &rhs)
    {
        *m_pnData = *rhs.m_pnData;

        // return the reference of the object itself
        return *this;
    }

    int GetData()
    {
        if (m_pnData != NULL)
            return *m_pnData;

        return 0;
    }

private :
    // pointer member data
    int *m_pnData = nullptr;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a(10);
    CMyData b(20);

    // if the simple assignment is tried, all members' values are copied
    a = b;
    cout << a.GetData() << endl;

    return 0;
}