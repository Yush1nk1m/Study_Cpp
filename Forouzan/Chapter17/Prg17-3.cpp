/****************************************************
 * A program which finds out the fibonacci number   *
****************************************************/
#include <iostream>
using namespace std;

// function declaration
long long fib(int n);

int main()
{
    // fibonacci number in range between 0 ~ 10 test
    cout << "The test for fibonacci number in range between 0 and 10" << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << "fib(" << i << ") = " << fib(i) << endl;
    }
    cout << endl;
    // 35th and 36th fibonacci number test
    cout << "The test for 35th and 36th fibonacci number" << endl;
    cout << "fib(35) = " << fib(35) << endl;
    cout << "fib(36) = " << fib(36) << endl;
    return 0;
}

// function definition
long long fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}