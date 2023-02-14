#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int);
bool isPrime(int, int);
void primeDivisors(int);
void primeDivisors(int, int);

void primeDivisors(int n)
{
    if (n <= 0)
    {
        return;
    }
    else
    {
        return primeDivisors(n, 2);
    }
}

void primeDivisors(int n, int divisor)
{
    if (floor(sqrt(n)) < divisor)
    {
        return;
    }
    else if (n % divisor == 0 && isPrime(divisor))
    {
        cout << divisor << " ";
    }
    return primeDivisors(n, divisor + 1);
}

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        return isPrime(n, 2);
    }
}

bool isPrime(int n, int divisor)
{
    if (divisor > floor(sqrt(n)))
    {
        return true;
    }
    else if (n % divisor == 0)
    {
        return false;
    }
    else
    {
        return isPrime(n, divisor + 1);
    }
}

int main()
{
    primeDivisors(12);
    return 0;
}