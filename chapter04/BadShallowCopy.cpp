#include "tchar.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    //
    int *pA, *pB;

    //
    pA = new int;
    *pA = 10;

    //
    pB = new int;
    pB = pA;

    //
    cout << *pA << endl;
    cout << *pB << endl;

    //
    delete pA;
    //delete pB;

    return 0;
}