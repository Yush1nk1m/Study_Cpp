#include <tchar.h>
#include <iostream>
using namespace std;

// maker's code
class CRefTest
{
public :
    // the reference type member must be initialized using the initializer list
    CRefTest(int& rParam) : m_nData(rParam) { };
    int GetData(void) { return m_nData; }

private :
    // the reference type member must be initialized when the object is generated
    int& m_nData;
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    int a = 10;
    CRefTest t(a);

    cout << t.GetData() << endl;

    // the original of reference a is adjusted
    a = 20;
    cout << t.GetData() << endl;

    return 0;
}