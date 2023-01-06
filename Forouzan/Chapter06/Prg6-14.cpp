/*********************************************************************
 * A program which confirms that in the pass-by-reference mechanism, *
 * a change in a paramter has an effect on the argument              *
*********************************************************************/
#include <iostream>
using namespace std;

// function declaration
void fun(int& y);       // & symbol indicates that y is a reference

int main()
{
    // variable declaration
    int x = 10;
    // call fun function with x as an argument
    fun(x);
    // check if x's value has changed(it has changed)
    cout << "The value of x in the main function : " << x << endl;
    return 0;
}

/************************************************************************
 * fun function receives reference to y,                                *
 * hence y becomes an alias of an argument when the function is called, *
 * and if the parameter changes, the argument also changes              *
************************************************************************/
void fun(int& y)
{
    y++;
    cout << "The value of y in fun function : " << y << endl;
    return;
}