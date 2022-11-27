#include <tchar.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int aList[5] = {10, 20, 30, 40, 50};

    // the loop statement of typical C style
    for (int i = 0; i < 5; ++i)
        cout << aList[i] << ' ';
    cout << endl;
    
    // range-based loop statement of C++11 style
    // the values of each element are copied to instance 'n'
    for (auto n : aList)
        cout << n << ' ';
    cout << endl;

    // 'n' is reference of each element
    for (auto &n : aList)
        cout << n << ' ';
    cout << endl;

    return 0;
}