/********************************************************************
 * A program which finds out the factorial value and the sum value  *
********************************************************************/
#include <iostream>
using namespace std;

// sum function declaration
int sum(int n);
// factorial function declaration
int factorial(int n);

int main()
{
    // sum(0) and factorial(1) test
    cout << "sum(0) = " << sum(0) << endl;
    cout << "factorial(1) = " << factorial(1) << endl << endl;
    // sum(3) and factorial(3) test
    cout << "sum(3) = " << sum(3) << endl;
    cout << "factorial(3) = " << factorial(3) << endl << endl;
    // sum(7) and factorial(7) test
    cout << "sum(7) = " << sum(7) << endl;
    cout << "factorial(7) = " << factorial(7) << endl;
    return 0;
}

// sum(n) recursive function definition
int sum(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return (n + sum(n - 1));
}
// factorial(n) recursive function definition
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return (n * factorial(n - 1));
}