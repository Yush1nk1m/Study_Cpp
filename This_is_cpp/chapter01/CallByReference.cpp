#include <tchar.h>
#include <iostream>
using namespace std;

// the parameter is reference of int type
void TestFunc(int& rParam)
{
    // Callee function changed the original value
    rParam = 100;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int nData = 0;

    // the function is called by reference
    TestFunc(nData); 
    /* *** caller code만으로는 parameter가 reference 형식이라는 걸 알 수 없기 떄문에 함수의 원형을 확신할 수 없다. */
    cout << nData << endl;

    return 0;
}