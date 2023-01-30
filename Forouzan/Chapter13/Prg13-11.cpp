/************************************************
 * An implementation file for Fraction class    *
************************************************/
#include "fraction2.h"

// parameter constructor
Fraction::Fraction(int numer, int denom = 1)
: numer(numer), denom(denom)
{
    normalize();
}
// parameter constructor
Fraction::Fraction(double value)
{
    denom = 1;
    while ((value - static_cast<int>(value) > 0.0))
    {
        value *= 10.0;
        denom *= 10;
    }
    numer = static_cast<int>(value);
    normalize();
}
// default constructor
Fraction::Fraction()
: numer(0), denom(1)
{
}
// copy constructor
Fraction::Fraction(const Fraction& fraction)
: numer(fraction.numer), denom(fraction.denom)
{
}
// destructor
Fraction::~Fraction()
{
}
// casting operator
Fraction::operator double()
{
    double num = static_cast<double>(numer);
    return (num / denom);
}
// positive number operator
const Fraction Fraction::operator+() const
{
    Fraction temp(+numer, denom);
    return temp;
}
// negative number operator
const Fraction Fraction::operator-() const
{
    Fraction temp(-numer, denom);
    return temp;
}
// prefix increment operator
Fraction& Fraction::operator++()
{
    numer += denom;
    this->normalize();
    return (*this);
}
// prefix decrement operator
Fraction& Fraction::operator--()
{
    numer -= denom;
    this->normalize();
    return (*this);
}
// postfix increment operator
const Fraction Fraction::operator++(int)
{
    Fraction temp(numer, denom);
    ++(*this);
    return temp;
}
// postfix decrement operator
const Fraction Fraction::operator--(int)
{
    Fraction temp(numer, denom);
    --(*this);
    return temp;
}
// assignment operator
Fraction& Fraction::operator=(const Fraction& right)
{
    if (*this != right)
    {
        numer = right.numer;
        denom = right.denom;
    }
    return (*this);
}
// complex assignment operator(+=)
Fraction& Fraction::operator+=(const Fraction& right)
{
    numer = numer * right.denom + denom * right.numer;
    denom = denom * right.denom;
    normalize();
    return (*this);
}
// complex assignment operator(-=)
Fraction& Fraction::operator-=(const Fraction& right)
{
    numer = numer * right.denom - denom * right.numer;
    denom = denom * right.denom;
    normalize();
    return (*this);
}
// complex assignment operator(*=)
Fraction& Fraction::operator*=(const Fraction& right)
{
    numer *= right.numer;
    denom *= right.denom;
    normalize();
    return (*this);
}
// complex assignment operator(/=)
Fraction& Fraction::operator/=(const Fraction& right)
{
    numer *= right.denom;
    denom *= right.numer;
    normalize();
    return (*this);
}
// friend addition operator
const Fraction operator+(const Fraction& left, const Fraction& right)
{
    int newNumer = left.numer * right.denom + left.denom * right.numer;
    int newDenom = left.denom * right.denom;
    Fraction result(newNumer, newDenom);
    return result;
}
// friend subtraction operator
const Fraction operator-(const Fraction& left, const Fraction& right)
{
    int newNumer = left.numer * right.denom - left.denom * right.numer;
    int newDenom = left.denom * right.denom;
    Fraction result(newNumer, newDenom);
    return result;
}
// friend multiplication operator
const Fraction operator*(const Fraction& left, const Fraction& right)
{
    int newNumer = left.numer * right.numer;
    int newDenom = left.denom * right.denom;
    Fraction result(newNumer, newDenom);
    return result;
}
// friend division operator
const Fraction operator/(const Fraction& left, const Fraction& right)
{
    int newNumer = left.numer * right.denom;
    int newDenom = left.denom * right.numer;
    Fraction result(newNumer, newDenom);
    return result;
}
// friend == operator
bool operator==(const Fraction& left, const Fraction& right)
{
    return (left.numer * right.denom == left.denom * right.numer);
}
// friend != operator
bool operator!=(const Fraction& left, const Fraction& right)
{
    return (left.numer * right.denom != left.denom * right.numer);
}
// friend < operator
bool operator<(const Fraction& left, const Fraction& right)
{
    return (left.numer * right.denom < left.denom * right.numer);
}
// friend <= operator
bool operator<=(const Fraction& left, const Fraction& right)
{
    return (left.numer * right.denom <= left.denom * right.numer);
}
// friend > operator
bool operator>(const Fraction& left, const Fraction& right)
{
    return (left.numer * right.denom > left.denom * right.numer);
}
// friend >= operator
bool operator>=(const Fraction& left, const Fraction& right)
{
    return (left.numer * right.denom >= left.denom * right.numer);
}
// friend extraction operator
istream& operator>>(istream& left, Fraction& right)
{
    cout << "Enter the numerator : ";
    left >> right.numer;
    cout << "Enter the denominator : ";
    left >> right.denom;
    right.normalize();
    return left;
}
// friend insertion operator
ostream& operator<<(ostream& left, const Fraction& right)
{
    left << right.numer << "/" << right.denom;
    return left;
}
// helper function(greatest common divisor)
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
// helper function(reduction)
void Fraction::normalize()
{
    if (denom == 0)
    {
        cout << "It is an invalid fraction. Terminate the program." << endl;
        assert(false);
    }
    if (denom < 0)
    {
        denom = -denom;
        numer = -numer;
    }
    int divisor = gcd(abs(numer), abs(denom));
    numer /= divisor;
    denom /= divisor;
}