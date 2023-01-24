/****************************************************
 * A program which connects string and character    *
****************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // declaration
    string first, last;
    char init;
    // receive input
    cout << "Enter the First Name : ";
    cin >> first;
    cout << "Enter the Last Name : ";
    cin >> last;
    cout << "Enter the initial : ";
    cin >> init;
    // print Full Name as the first form
    cout << endl;
    cout << "Full Name of the first form : ";
    cout << first + " " + init + "." + " " + last << endl;
    // print Full Name as the second form
    cout << "Full Name of the second form : ";
    cout << last + ", " + first + " " + init + "." << endl;
    return 0;
}