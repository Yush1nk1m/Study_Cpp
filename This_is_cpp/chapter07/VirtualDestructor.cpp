#include "tchar.h"
#include <iostream>
using namespace std;

// maker's code
class CMyData
{
public :
    CMyData() { m_pszData = new char[32]; }
    virtual ~CMyData()
    {
        cout << "~CMyData()" << endl;
        delete m_pszData;
    }

private :
    char* m_pszData;
};

class CMyDataEx : public CMyData
{
public :
    CMyDataEx() { m_pnData = new int; }
    ~CMyDataEx()
    {
        cout << "~CMyDataEx()" << endl;
        delete m_pnData;
    }

private :
    int* m_pnData;
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CMyData* pData = new CMyDataEx;

    // destructor with referencing type is called
    delete pData;

    return 0;
}