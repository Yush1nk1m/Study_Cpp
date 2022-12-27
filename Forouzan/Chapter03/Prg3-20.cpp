/*****************************************************
 * Check overflow and underflow of double data type  *
*****************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    // searching maximum and minimum values of double type
    double num1 = +numeric_limits<double>::max();
    double num2 = -numeric_limits<double>::max();
    // print maximum and minimum values of double data type
    cout << "The maximum value of double : " << num1 << endl;
    cout << "The minimum value of double : " << num2 << endl;
    // multiply 1000.00 to values
    num1 *= 1000.00;
    num2 *= 1000.00;
    // print overflowed and underflowed values
    cout << "The value of overflowed 'num1 * 1000' : " << num1 << endl;
    cout << "The value of underflowed 'num2 * 1000' : " << num2 << endl;
    return 0;
}