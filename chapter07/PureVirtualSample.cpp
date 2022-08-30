#include "tchar.h"
#include <iostream>
using namespace std;

// initial designer's code
class CMyInterface
{
public :
    CMyInterface()
    {
        cout << "CMyInterface()" << endl;
    }

    // pure virtual function only with declaration, no definition
    virtual int GetData() const = 0;
    virtual void SetData(int nParam) = 0;
};

// later developer's code
class CMyData : public CMyInterface
{
public :
    CMyData() { cout << "CMyData()" << endl; }

    // pure virtual function 'must' be defined in the derived class
    virtual int GetData() const { return m_nData; }
    virtual void SetData(int nParam) { m_nData = nParam; }

private :
    int m_nData = 0;
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    // pure virtual class cannot declare and define instance
    // CMyInterface a;
    CMyData a;
    a.SetData(5);
    cout << a.GetData() << endl;

    return 0;
}