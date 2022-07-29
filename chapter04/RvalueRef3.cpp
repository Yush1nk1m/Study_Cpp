#include "tchar.h"
#include <iostream>
using namespace std;

// r-value reference form
void TestFunc(int &&rParam)
{
    cout << "TestFunc(int &&)" << endl;
}

// caller code equals with r-value reference form
void TestFunc(int nParam)
{
    cout << "TestFunc(int)" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    // ambiguous calling, both int type and int&& type are able
    TestFunc(3 + 4);

    return 0;
}