/*************************************************************************************
 * A program which calculates and prints absolute value with if condition statement  *
*************************************************************************************/
#include <iostream>
using namespace std;

int main() {
    // variable declaration
    int number;
    // receive input
    cout << "Enter an integer number : ";
    cin >> number;
    // find absolute value
    if (number < 0)
    {
        number = -number;
    }
    // print absolute value
    cout << "The absolute number of given number : " << number;
    return 0;
}