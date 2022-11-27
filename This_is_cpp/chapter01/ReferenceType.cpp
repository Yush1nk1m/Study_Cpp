#include <tchar.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int nData = 10;

    // declare a reference about the instance 'nData'
    int& ref = nData;
    
    // if the value of a reference is changed, so the value of instance is also changed
    ref = 20;
    cout << nData << endl;

    // similar to using pointer
    int* pnData = &nData;
    *pnData = 30;
    cout << nData << endl;

    return 0;
}