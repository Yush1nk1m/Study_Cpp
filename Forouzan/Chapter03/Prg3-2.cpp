/********************************************************
 * A program which shows a few parenthesis expressions  *
********************************************************/
#include <iostream>
using namespace std;

int main() {
    // declearation and initialization of a variable
    int x = 4;
    // the first expression
    cout << "The case when a parenthesis exists : " << (x + 3) * 5 << endl;
    cout << "The case when a parenthesis doesn't exist : " << x + 3 * 5 << endl << endl;
    // the second expression
    cout << "The case when a parenthesis exists : " << 12 / (x + 2) << endl;
    cout << "The case when a parenthesis doesn't exist : " << 12 / x + 2;
    return 0;
}