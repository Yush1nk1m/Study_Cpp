/***************************************************************
 * A program which shows a few complex assignment expressions  *
***************************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration and initialization of 5 variables
    int x = 20;
    int y = 30;
    int z = 40;
    int t = 50;
    int u = 60;
    // using complex assignment
    x += 5;
    y -= 3;
    z *= 10;
    t /= 8;
    u %= 7;
    // result
    cout << "The value of x : " << x << endl;
    cout << "The value of y : " << y << endl;
    cout << "The value of z : " << z << endl;
    cout << "The value of t : " << t << endl;
    cout << "The value of u : " << u;
    return 0;
}