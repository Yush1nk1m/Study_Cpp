/******************************************************************************
 * Apply arithmetic operator to do implicit type promotion                    *
 * to data types(bool, char, short, float) which have no arithmetic operator  *
******************************************************************************/
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    // declaration
    bool x = true;
    char y = 'A';
    short z = 14;
    float t = 24.5;
    // data type conversion from bool to int
    cout << "The data type of 'x + 100' : " << typeid(x + 100).name() << endl;
    cout << "The value of 'x + 100' : " << x + 100 << endl;
    // data type conversion from char to int
    cout << "The data type of 'y + 1000' : " << typeid(y + 1000).name() << endl;
    cout << "The value of 'y + 1000' : " << y + 1000 << endl;
    // data type conversion from short to int
    cout << "The data type of 'z * 100' : " << typeid(z * 100).name() << endl;
    cout << "The value of 'z * 100' : " << z * 100 << endl;
    // data type conversion from float to double
    cout << "The data type of 't + 15000.2' : " << typeid(t + 15000.2).name() << endl;
    cout << "The value of 't + 15000.2' : " << t + 15000.2;
    return 0;
}