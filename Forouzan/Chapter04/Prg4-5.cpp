/*****************************************************************************
 * A program which prints a small-to-large relationship of given two inputs  *
*****************************************************************************/
#include <iostream>
using namespace std;

int main() {
    // variable declaration
    int num1, num2;
    // receive input
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    // decision making with nested if-else condition statement
    if (num1 >= num2)
    {
        if (num1 > num2)
        {
            cout << num1 << " > " << num2;
        }
        else
        {
            cout << num1 << " == " << num2;
        }
    }
    else
    {
        cout << num1 << " < " << num2;
    }
    return 0;
}