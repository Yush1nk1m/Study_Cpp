#include "tchar.h"
#include <iostream>
using namespace std;

void TestFunc(int &rParam)
{
    cout << "TestFunc(int &)" << endl;
}

void TestFunc(int &&rParam)
{
    cout << "TestFunc(int &&)" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    // result of '3 + 4' operation is r-value, cannot be l-value
    TestFunc(3 + 4);

    return 0;
}