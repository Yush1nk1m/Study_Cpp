#include <iostream>
#include <cmath>
using namespace std;

void divisors(int);
void divisors(int, int);

void divisors(int n)
{
    if (n <= 0)
    {
        return;
    }
    else
    {
        return divisors(n, 1);
    }
}

void divisors(int n, int divisor)
{
    if (n < divisor)
    {
        return;
    }
    else if (n % divisor == 0)
    {
        cout << divisor << " ";
    }
    return divisors(n, divisor + 1);
}

int main()
{
    divisors(12);
    return 0;
}