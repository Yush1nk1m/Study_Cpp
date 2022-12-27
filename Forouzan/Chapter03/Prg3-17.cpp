/******************************************************
 * An expression with left combination direction(<-)  *
******************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration and initialization
    int x = 10;
    int y = 20;
    // assignment
    y += x *= 40;
    // print the value of x and y
    cout << "The value of x : " << x << endl;
    cout << "The value of y : " << y;
    return 0;
}