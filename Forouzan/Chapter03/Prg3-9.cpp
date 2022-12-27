/****************************************
 * Expressions implicit type promotion  *
 * which have no extra action           *
****************************************/
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    // declaration
    int x = 123;
    long y = 140;
    double z = 114.56;
    // check data type and value of expression 'x + y'
    cout << "The data type of 'x + y' : " << typeid(x + y).name() << endl;
    cout << "The value of 'x + y' : " << x + y << endl << endl;
    // check data type and value of expression 'x + y + z'
    cout << "The data type of 'x + y + z' : " << typeid(x + y + z).name() << endl;
    cout << "The value of 'x + y + z' : " << x + y + z << endl;
    return 0;
}