/**********************************************************
 * Use a few manipulators associated with floating point  *
**********************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration
    double x = 1237;
    double y = 12376745.5623;
    // use 'fixed' and 'showpoint' manipulators
    cout << "The fixed point type of x : " << x << endl;
    cout << "The fixed point type of x : " << showpoint << x << endl;
    // use 'scientific' manipulator
    cout << "The scientific notation of y : " << scientific << y;
    return 0;
}