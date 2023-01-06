/*****************************************************************
 * A program which prints a greeting message with void function  *
*****************************************************************/
#include <iostream>
using namespace std;

/*****************************************************************
 * A definition of greeting function, it is void function.       *
 * Generate it to print a 3-line message.                        *
 * No value has returned but,                                    *
 * it has additional action printing a message on the screen     *
*****************************************************************/
void greeting()
{
    cout << "************" << endl;
    cout << "*  HELLO   *" << endl;
    cout << "************" << endl;
    return;
}

int main()
{
    greeting();     // call greeting function
    return 0;
}