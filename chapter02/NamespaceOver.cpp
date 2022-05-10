#include <tchar.h>
#include <iostream>
using namespace std;

// global namespace (conceptually independent)
void TestFunc(void) { cout << "::TestFunc()" << endl; }

namespace TEST
{
    // belong to TEST namespace
    void TestFunc(void) {
        cout << "TEST::TestFunc()" << endl;
    }
}

namespace MYDATA
{
    // belong to MYDATA namespace
    void TestFunc(void) {
        cout << "DATA::TestFunc()" << endl;
    }
}

int _tmain(int argc, _TCHAR* argv[])
{
    TestFunc();     // implied global namespace
    ::TestFunc();   // explicit global namespace
    TEST::TestFunc();
    MYDATA::TestFunc();

    return 0;
}