/********************************************************
 * A program which prints the same output as before     *
 * with the standard manipulators                       *
********************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // variable declaration, initialization
    bool b = true;
    int i = 12000;
    double d = 12467.372;
    // simple output
    cout << "Output without formatting" << endl;
    cout << "The value of b : " << b << endl;
    cout << "The value of i : " << i << endl;
    cout << "The value of d : " << d << endl << endl;
    // output after bool data type formatting
    cout << "bool data type formatting" << endl;
    cout << boolalpha << b << endl << endl;
    // output after integer data type formatting
    cout << "integer data type formatting" << endl;
    cout << showbase << uppercase << hex << right << setw(16) << setfill('*') << i << endl << endl;
    // output after floating point data type formatting
    cout << "floating point data type formatting" << endl;
    cout << showpoint << right << fixed << setw(16) << setprecision(2) << setfill('*') << d << endl << endl;
    return 0;
}