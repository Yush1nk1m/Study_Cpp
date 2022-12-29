/*****************************************************************
 * A program which prints the larger number or the first number  *
 * of two received numbers with if-else condition statement      *
*****************************************************************/
#include <iostream>
using namespace std;

int main() {
    // variable declaration
    int num1, num2;
    int larger;
    // receive input
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    // decision making
    if (num1 >= num2)
    {
        larger = num1;
    }   // end of if statement
    else
    {
        larger = num2;
    }   // end of else statement
    // print result
    cout << "The larger number : " << larger;
    return 0;
}