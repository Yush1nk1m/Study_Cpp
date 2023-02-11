/****************************************************
 * A program which does formatting by data types    *
 * with flag, field, and variable                   *
****************************************************/
#include <iostream>
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
    cout.setf(ios::boolalpha);
    cout << b << endl << endl;
    // output after integer data type formatting
    cout << "integer data type formatting" << endl;
    cout.setf(ios::showbase);
    cout.setf(ios::uppercase);
    cout.setf(ios::hex, ios::basefield);
    cout.setf(ios::right, ios::adjustfield);
    cout.width(16);
    cout.fill('*');
    cout << i << endl << endl;
    // output after floating point data type formatting
    cout << "floating point data type formatting" << endl;
    cout.setf(ios::showpoint);
    cout.setf(ios::right, ios::adjustfield);
    cout.setf(ios::fixed, ios::floatfield);
    cout.width(16);
    cout.precision(2);
    cout.fill('*');
    cout << d << endl;
    return 0;
}