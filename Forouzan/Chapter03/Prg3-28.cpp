/******************************************************************
 * A program which extracts integral part and fractional part     *
 * of given floating point                                        *
******************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // variable declaration
    double number;
    int intPart;
    double fractPart;
    // receive input
    cout << "Enter the floating point : ";
    cin >> number;
    // process
    intPart = static_cast<int>(number);
    fractPart = number - intPart;
    // print
    cout << fixed << showpoint << setprecision(2);
    cout << "The original value : " << number << endl;
    cout << "The integral part : " << intPart << endl;
    cout << "The fractional part : " << fractPart;
    return 0;
}