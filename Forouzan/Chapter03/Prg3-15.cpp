/*******************************************************
 * Evaluation of a simple expression with extra effect *
*******************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration and initialization
    int x = 8;
    int y = 10;
    // assignment
    y *= x + 5;
    // print the value of variable 'y'
    cout << "The value of y : " << y;
    return 0;
}