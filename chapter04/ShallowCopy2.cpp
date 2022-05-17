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

    // define a function of assignment operator
    CMyData& operator=(const CMyData& rhs)
    {
        *m_pnData = *rhs.m_pnData;

        // return a reference for the object itself
        return *this;
    }

    int GetData()
    {
        if (m_pnData != NULL)
            return *m_pnData;

        return 0;
    }

private :
    int* m_pnData = nullptr;
};

int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a(10);
    CMyData b(20);
    
    cout << "a(before) : " << a.GetData() << endl;

    // values of all members are copied when the simple assignment is tried
    a = b;
    cout << "a(after) : " << a.GetData() << endl;
    cout << "b : " << b.GetData() << endl;

    return 0;
}