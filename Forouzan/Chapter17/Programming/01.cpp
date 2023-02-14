#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}

int permutation(int n, int k)
{
    return factorial(n) / factorial(n - k);
}