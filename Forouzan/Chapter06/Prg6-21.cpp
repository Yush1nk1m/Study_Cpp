/**********************************************************
 * A program which checks shadowing of a global variable  *
**********************************************************/
#include <iostream>
using namespace std;

int num = 5;                // global variable

int main()
{
    cout << num << endl;    // global variable num
    int num = 25;           // local variable
    cout << num << endl;     // local variable num covers global variable num (shadowing)
    return 0;
}