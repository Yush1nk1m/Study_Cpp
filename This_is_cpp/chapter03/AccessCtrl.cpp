#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CMyData
{
    // default access modifier is 'private'
    int m_nData;

public :
    int GetData(void) { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CMyData data;
    data.SetData(10);
    cout << data.GetData() << endl;

    return 0;
}