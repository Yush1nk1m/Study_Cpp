#include <tchar.h>
#include <iostream>
using namespace std;

int nData = 100;

namespace TEST
{
    int nData = 200;
}

//using namespace TEST; // ambiguous

int _tmain(int argc, _TCHAR* argv[])
{
    cout << nData << endl;

    return 0;
}