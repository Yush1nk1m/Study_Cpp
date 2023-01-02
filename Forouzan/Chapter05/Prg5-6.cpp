/*********************************************************************
 * A program which finds out the sum of numbers entered by keyboard  *
 * with EOF control while loop statement                             *
*********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    int sum = 0;
    int num;
    // initialize and run the loop
    cout << "Enter the first number(enter EOF to exit) : ";
    while (cin >> num)
    {
        sum += num;
        cout << "Enter the next number : ";     // update
    }
    // print
    cout << "The sum : " << sum;
    return 0;
}