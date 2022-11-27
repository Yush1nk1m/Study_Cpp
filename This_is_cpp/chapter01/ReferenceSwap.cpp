#include <tchar.h>
#include <iostream>
using namespace std;

// it is call by reference, so the value of the caller instance can be changed
void Swap(int& a, int& b)
{
    int nTmp = a;
    a = b;
    b = nTmp;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int x = 10, y = 20;

    cout << "x (original) : " << x << endl;
    cout << "y (original) : " << y << endl;

    // reference passing, hence the value of two instances are changed
    Swap(x, y);

    cout << "x : " << x << endl;
    cout << "y : " << y << endl;

    return 0;
}