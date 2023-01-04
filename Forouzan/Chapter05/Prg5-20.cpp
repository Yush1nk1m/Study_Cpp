/*****************************************************************
 * A program which finds out a involution with a loop statement  *
*****************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int base, exponent;
    unsigned long int power, temp;
    bool overflow;
    // receive input doing data validation
    do
    {
        cout << "Enter a base as a non-negative integer : ";
        cin >> base;
    } while (base < 0);
    // receive input doing data validation
    do
    {
        cout << "Enter an exponent as a non-negative integer : ";
        cin >> exponent;
    } while (exponent < 0);
    // initialization
    power = 1;
    temp = power;
    overflow = false;
    // process
    for (int i = 1; (i <= exponent) && (!overflow); i++)
    {
        power *= base;
        if (power / base != temp)
        {
            overflow = true;    // terminate loop statement
        }
        temp = power;
    }
    // print
    if (overflow)
    {
        cout << "An overflow has been occurred. Try again with a lower value." << endl;
    }
    else
    {
        cout << base << "^" << exponent << " = " << power;
    }
    return 0;
}