#include "tchar.h"
#include <iostream>
using namespace std;

// earlier maker's code
class CMyObject
{
public :
    CMyObject() { }
    virtual ~CMyObject() { }

    // every derived class can assume that they have this method
    virtual int GetDeviceID() = 0;

protected :
    int m_nDeviceID;
};

// a function made by earlier maker
void PrintID(CMyObject* pObj)
{
    // without knowing what it is, ID can be printed
    cout << "Device ID : " << pObj->GetDeviceID() << endl;
}

// later maker's code
class CMyTV : public CMyObject
{
public :
    CMyTV(int nID) { m_nDeviceID = nID; }
    virtual int GetDeviceID()
    {
        cout << "CMyTV::GetDeviceID()" << endl;
        return m_nDeviceID;
    }
};

class CMyPhone : public CMyObject
{
public :
    CMyPhone(int nID) { m_nDeviceID = nID; }
    virtual int GetDeviceID()
    {
        cout << "CMyPhone::GetDeviceID()" << endl;
        return m_nDeviceID;
    }
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CMyTV a(5);
    CMyPhone b(10);

    // regardless of what the real object is, automatically print self.ID
    ::PrintID(&a);
    ::PrintID(&b);

    return 0;
}