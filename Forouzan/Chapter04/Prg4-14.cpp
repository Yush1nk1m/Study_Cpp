/*************************************************
 * Print the larger number or the first number   *
 * with conditional expression                   *
*************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int num1, num2;
    int larger;
    // receive input
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the seccond number : ";
    cin >> num2;
    // decision making
    larger = num1 >= num2 ? num1 : num2;
    // print
    cout << "The larger number : " << larger;
    return 0;
}