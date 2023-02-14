#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isPrime(int);
bool isPrime(int, int);

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
    cout << boolalpha << "isPrime(2) = " << isPrime(2) << endl;
    cout << boolalpha << "isPrime(302) = " << isPrime(302) << endl;
    return 0;
}