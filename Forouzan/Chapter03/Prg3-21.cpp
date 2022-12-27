/************************************************
 * Use boolalpha manipulator to bool data type  *
************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration
    bool x = true;
    bool y = false;
    // print without manipulator
    cout << "The natural output of x : " << x << endl;
    cout << "The natural output of y : " << y << endl;
    // print with manipulator
    cout << "The value of x with manipulator : " << boolalpha << x << endl;
    cout << "The value of y : " << y << endl;
    return 0;
}