#include <tchar.h>
#include <iostream>
using namespace std;

void Swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int _tmain(int argc, _TCHAR* argv[]) {
    int x, y;

    cout << "Enter the x : ";
    cin >> x;

    cout << "Enter the y : ";
    cin >> y;

    cout << "x : " << x << ", y : " << y << endl;

    Swap(x, y);

    cout << "x : " << x << ", y : " << y << endl;

    return 0;
}