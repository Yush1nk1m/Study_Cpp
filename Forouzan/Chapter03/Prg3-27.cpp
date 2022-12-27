/*****************************************************************
 * A program which finds the sum of three numbers and prints it  *
*****************************************************************/
#include <iostream>
using namespace std;

int main() {
    // variable declaration
    int first, second, third, sum;
    // receive input
    cout << "Enter the first number : ";
    cin >> first;
    cout << "Enter the second number : ";
    cin >> second;
    cout << "Enter the third number : ";
    cin >> third;
    // calculation
    sum = first + second + third;
    // print
    cout << "The sum of three numbers : " << sum;
    return 0;
}