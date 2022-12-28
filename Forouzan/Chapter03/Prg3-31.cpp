/****************************************************************************************
 * A program which receives three integer, finds the sum of numbers and their average,  *
 * and calculates dispersion of each number                                             *
****************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // variable declaration
    int num1, num2, num3;
    int sum;
    double average;
    double dev1, dev2, dev3;
    // receive input
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    cout << "Enter the third number : ";
    cin >> num3;
    // process
    sum = num1 + num2 + num3;
    average = static_cast<double>(sum) / 3;
    dev1 = num1 - average;
    dev2 = num2 - average;
    dev3 = num3 - average;
    // print
    cout << fixed << showpos << setprecision(2);
    cout << "The sum of three numbers : " << sum << endl;
    cout << "The average of three numbers : " << setw(9) << average << endl;
    cout << "The dispersion of the first number : " << setw(9) << dev1 << endl;
    cout << "The dispersion of the second number : " << setw(9) << dev2 << endl;
    cout << "The dispersion of the third number : " << setw(9) << dev3 << endl;
    return 0;
}