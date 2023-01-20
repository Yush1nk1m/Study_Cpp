/********************************************
 * A program which prints the values and    *
 * addresses of three variables             *
********************************************/
#include <iostream>
using namespace std;

int main()
{
    // three data variables declaration
    bool flag = true;
    int score = 92;
    double average = 82.56;
    // print size, value, address of variable flag
    cout << "bool type variable" << endl;
    cout << "Size : " << sizeof(flag) << "\t";
    cout << "Value : " << flag << "\t";
    cout << "Address : " << &flag << endl << endl;
    // print size, value, address of variable score
    cout << "int type variable" << endl;
    cout << "Size : " << sizeof(score) << "\t";
    cout << "Value : " << score << "\t";
    cout << "Address : " << &score << endl << endl;
    // print size, value, address of variable average
    cout << "double type variable" << endl;
    cout << "Size : " << sizeof(average) << "\t";
    cout << "Value : " << average << "\t";
    cout << "Address : " << &average << endl;
    return 0;
}