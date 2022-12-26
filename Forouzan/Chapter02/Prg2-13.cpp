/*****************************************************************
 * A program which receive first name, initial, last name and    *
 * concatenate them and print it                                 *
*****************************************************************/
#include <iostream>
#include <string>       // include to use string class
using namespace std;

int main() {
    // declaration of variables
    string first;
    string initial;
    string last;
    string space = " ";
    string dot = ".";
    string fullName;
    // receive first name, initial, last name
    cout << "Enter the first name : ";
    cin >> first;
    cout << "Enter the initial : ";
    cin >> initial;
    cout << "Enter the last name : ";
    cin >> last;
    // concatenate string using concatenation operator
    fullName = first + space + initial + dot + space + last;
    // print full name
    cout << "Full name : " << fullName;
    return 0; 
}