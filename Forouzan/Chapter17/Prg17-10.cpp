/********************************************************************
 * A program which checks if an integer is a prime number or not    *
********************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// function declaration
bool isPrime(int num);
bool isPrime(int div, int num);

int main()
{
    // check if an integer is a prime number or not
    cout << "isPrime(1) = " << boolalpha << isPrime(1) << endl;
    cout << "isPrime(2) = " << boolalpha << isPrime(2) << endl;
    cout << "isPrime(7) = " << boolalpha << isPrime(7) << endl;
    cout << "isPrime(21) = " << boolalpha << isPrime(21) << endl;
    cout << "isPrime(59) = " << boolalpha << isPrime(59) << endl;
    cout << "isPrime(97) = " << boolalpha << isPrime(97) << endl;
    cout << "isPrime(301) = " << boolalpha << isPrime(301) << endl;
    return 0;
}
// isPrime helper function definition
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    else if (num == 2)
    {
        return true;
    }
    return isPrime(2, num);
}
// isPrime recursive function definition
bool isPrime(int div, int num)
{
    if (num % div == 0)
    {
        return false;
    }
    else if (div >= floor(sqrt(num)))
    {
        return true;
    }
    return isPrime(div + 1, num);
}