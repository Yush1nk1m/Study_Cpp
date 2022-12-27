/******************************************************
 * A program which shows simple assignment expression *
******************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration of variables
    int x;
    int y;
    // the first assignment
    cout << "The return value of assignment expression : " << (x = 14) << endl;
    cout << "The value of variable x : " << x << endl;
    // the second assignment
    cout << "The return value of assignment expression : " << (y = 87) << endl;
    cout << "The value of variable y : " << y << endl;
    return 0;
}