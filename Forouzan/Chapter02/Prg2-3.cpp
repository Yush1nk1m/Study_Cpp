/*******************************************************
 * A program which prints sum of two input numbers     *
*******************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration
    int num1;
    int num2;
    int sum;
    // enter
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    // calculation and assignment of the result
    sum = num1 + num2;
    // print
    cout << "Sum of the two numbers : " << sum;
    return 0;
}