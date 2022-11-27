#include <tchar.h>
#include <iostream>

// declare std namespace with using keyword
using namespace std;

namespace TEST
{
    int g_nData = 100;

    void TestFunc(void)
    {
        // there is no need to designate range about 'cout'
        cout << "TEST::TestFunc()" << endl;
    }
}

// declare using to TEST namespace
using namespace TEST;

int _tmain(int argc, _TCHAR* argv[])
{
    // there is no need to designate range about TestFunc() or g_nData
    TestFunc();
    cout << g_nData << endl;

    return 0;
}