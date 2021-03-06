#include <tchar.h>
#include <iostream>
using namespace std;

int TestFunc(int nParam)
{
    int nResult = nParam * 2;

    return nResult;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int nInput = 0;
    cout << "Input number : ";
    cin >> nInput;

    // r-value reference about temporary instance generated by arithmetic operation
    int&& rdata = nInput + 5;
    cout << "rdata : " << rdata << endl;

    // r-value reference about temporary object generated by function return
    int &&result = TestFunc(10);
    result += 10;
    cout << "result : " << result << endl;

    return 0;
}