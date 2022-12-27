/************************************************
 * A program which prints integer with          *
 * various system(decimal, octal, hexadecimal)  *
************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration of variable x
    int x = 1237;
    // print three numbers without showbase
    cout << "The decimal value of x : " << x << endl;
    cout << "The octal value of x : " << oct << x << endl;
    cout << "The hexadecimal value of x : " << hex << x << endl << endl;
    // print x with showbase
    cout << "The decimal value of x : " << showbase << dec << x << endl;
    cout << "The octal value of x : " << showbase << oct << x << endl;
    cout << "The hexadecimal value of x : " << showbase << hex << x;
    return 0;
}