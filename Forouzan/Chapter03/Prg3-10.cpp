/**********************************************
 * Check data type conversion of expressions  *
 * which have various data types              *
**********************************************/
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    // declaration
    int x;
    double y;
    // assignment
    x = 23.67;
    y = 130;
    // check data type and value of x
    cout << "The data type of 'x = 23.67' : " << typeid(x = 23.67).name() << endl;
    cout << "The value of 'x' after assignment : " << x << endl << endl;
    // check data type and value of y
    cout << "The data type of 'y = 130' : " << typeid(y = 130).name() << endl;
    cout << "The value of 'y' after assignment : " << y << endl;
    return 0;
}