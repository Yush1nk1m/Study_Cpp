/***********************************************************
 * A program which displays return-by-value in a function  *
***********************************************************/
#include <iostream>
using namespace std;

// function declaration
bool isEven(int y);

int main()
{
    // function call
    cout << boolalpha << isEven(5) << endl;
    cout << boolalpha << isEven(10) << endl;
    return 0;
}
/************************************************************
 * isEven function has y as a parameter and                 *
 * return if y is even after checking modular 2 of y        *
 * a form which returns a simple literal value              *
************************************************************/
bool isEven(int y)
{
    return ((y % 2) == 0);
}