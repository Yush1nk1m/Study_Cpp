/*****************************************
 * Receive integers with various systems *
*****************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration
    int num1, num2, num3;
    // receive the first input in decimal system(without manipulator)
    cout << "Enter the first number in decimal system : ";
    cin >> num1;
    // receive the second input in octal system
    cout << "Enter the second number in octal system : ";
    cin >> oct >> num2;
    // receive the third input in hexadecimal system
    cout << "Enter the third number in hexadecimal system : ";
    cin >> hex >> num3;
    // print
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3;
    return 0;
}