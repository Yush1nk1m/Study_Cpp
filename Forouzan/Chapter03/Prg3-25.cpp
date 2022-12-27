/**************************************************
 * Receive bool type input as 'true' and 'false'  *
**************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration
    bool flag;
    // receive input with manipulator
    cout << "Enter 'true' or 'false' to bool type variable : ";
    cin >> boolalpha >> flag;
    // print
    cout << flag;
    return 0;
}