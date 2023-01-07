/*******************************************************
 * A program which checks initialization of variables  *
*******************************************************/
#include <iostream>
using namespace std;

int global;                    // global variable

int main()
{
    static int sLocal;         // static local variable
    int aLocal;                // automatic local variable
    // output
    cout << "global variable = " << global << endl;
    cout << "static local variable = " << sLocal << endl;
    cout << "automatic local variable = " << aLocal << endl;
    return 0;
}