/********************************************************************
 * A program which confirms that in the pass-by-value mechanism,    *
 * a parameter's change has no effect to the argument               *
********************************************************************/
#include <iostream>
using namespace std;

// function declaration
void fun(int y);

int main()
{
    // variable declaration
    int x = 10;
    // call fun function with x as an argument
    fun(x);
    // check if x's value has changed(it has not changed)
    cout << "The value of x in the main function : " << x << endl;
    return 0;
}

/********************************************************************
 * fun function receives the value of x and saves it into y,        *
 * in this time, each of x and y points the other place of memory,  *
 * hence if y in fun function increases, it has no effect to        *
 * x in main function                                               *
********************************************************************/
void fun(int y)
{
    y++;
    cout << "y in fun function : " << y << endl;
    return;
}