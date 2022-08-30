#include "tchar.h"
#include <iostream>
using namespace std;

void TestFunc1(int nParam)
{
    cout << "TestFunc1 : " << nParam << endl;
}
void TestFunc2(int nParam)
{
    cout << "TestFunc2 : " << nParam << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int nInput = 0;
    cin >> nInput;
    void(*pfTest)(int) = NULL;

    if (nInput > 10)
        pfTest = TestFunc1;
    
    else
        pfTest = TestFunc2;
    
    pfTest(10);

    return 0;
}