/****************************************************
 * fraction.cpp implementation file                 *
 * which defines Fraction class' member functions   *
****************************************************/
#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"
using namespace std;

/************************************************************
 * Parameter constructor receives numerator and denominator *
 * by class invariants                                      *
************************************************************/
Fraction::Fraction(int num, int den = 1)
: numer(num), denom(den)
{
    normalize();
}
/************************************************
 * Default constructor generates 0/1            *
 * no separate validity examination is needed   *
************************************************/
Fraction::Fraction()
: numer(0), denom(1)
{
}
/****************************************************************
 * Copy constructor copies object with                          *
 * an existing object's numerator and denominator               *
 * which is already normalized hence no need to do normalize    *
****************************************************************/
Fraction::Fraction(const Fraction& fract)
: numer(fract.numer), denom(fract.denom)
{
}
/************************************************
 * No extra work is needed in the destructor    *
************************************************/
Fraction::~Fraction()
{
}
/********************************************
 * getNumer function is a getter function   *
 * which returns host object's numerator    *
********************************************/
int Fraction::getNumer() const
{
    return numer;
}
/********************************************
 * getDenom function is a getter function   *
 * which returns host object's denominator  *
********************************************/
int Fraction::getDenom() const
{
    return denom;
}
/************************************************************************
 * print function is a getter function which creates a side effect      *
 * that prints a fraction object to display in 'x/y' form               *
************************************************************************/
void Fraction::print() const
{
    cout << numer << "/" << denom << endl;
}
/********************************************
 * setNumer function is a setter function   *
 * which changes and normalizes numerator   *
********************************************/
void Fraction::setNumer(int num)
{
    numer = num;
    normalize();
}
/********************************************
 * setDenom function is a setter function   *
 * which changes and normalizes denominator *
********************************************/
void Fraction::setDenom(int den)
{
    denom = den;
    normalize();
}
/********************************************
 * normalize function normalizes a fraction *
 * in 3 ways                                *
********************************************/
void Fraction::normalize()
{
    // the case when the denominator is 0
    if (denom == 0)
    {
        cout << "Wrong denominator value. Program will be terminated." << endl;
        assert(false);
    }
    // change signs of denominator and numerator
    if (denom < 0)
    {
        denom = -denom;
        numer = -numer;
    }
    // divide numerator and denominator by greatest common divisor
    int divisor = gcd(abs(numer), abs(denom));
    numer /= divisor;
    denom /= divisor;
}
/****************************************************
 * gcd function utilizes greatest common divisor of *
 * numerator and denominator                        *
****************************************************/
int Fraction::gcd(int n, int m)
{
    int gcd = 1;
    for (int k = 1; k <= n && k <= m; k++)
    {
        if (n % k == 0 && m % k == 0)
        {
            gcd = k;
        }
    }
    return gcd;
}