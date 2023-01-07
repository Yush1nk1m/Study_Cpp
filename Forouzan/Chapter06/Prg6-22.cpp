/****************************************************
 * A program which uses scope resolution operator   *
****************************************************/
#include <iostream>
using namespace std;

int num = 5;                // global variable

int main()
{
    int num = 25;           // local variable
    cout << "The value of a global variable num = " << ::num << endl;
    cout << "The value of a local variable num = " << num << endl;
    return 0;
}