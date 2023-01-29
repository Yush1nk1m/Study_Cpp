/****************************************
 * An interface file for Fraction class *
****************************************/
#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <cassert>
#include <iomanip>
#include <cmath>
using namespace std;

// Fraction class
class Fraction
{
    private:
        int numer;
        int denom;
        int gcd(int n, int m = 1);      // helper function
        void normalize();               // helper function
    public:
        Fraction(int numer, int denom);         // parameter constructor
        Fraction(double value);                 // parameter constructor
        Fraction();                             // default constructor
        Fraction(const Fraction& fraction);     // copy constructor
        ~Fraction();                            // destructor
        // member operator
        operator double();                              // casting
        const Fraction operator+() const;               // positive number
        const Fraction operator-() const;               // negative number
        Fraction& operator++();                         // prefix increment
        Fraction& operator--();                         // prefix decrement
        const Fraction operator++(int);                 // postfix increment
        const Fraction operator--(int);                 // postfix decrement
        Fraction& operator=(const Fraction& right);     // assignment operator
        Fraction& operator+=(const Fraction& right);    // complex assignment operator
        Fraction& operator-=(const Fraction& right);    // complex assignment operator
        Fraction& operator*=(const Fraction& right);    // complex assignment operator
        Fraction& operator/=(const Fraction& right);    // complex assignment operator
        // friend mathematical operator
        friend const Fraction operator+(const Fraction& left, const Fraction& right);
        friend const Fraction operator-(const Fraction& left, const Fraction& right);
        friend const Fraction operator*(const Fraction& left, const Fraction& right);
        friend const Fraction operator/(const Fraction& left, const Fraction& right);
        // friend relationship operator
        friend bool operator==(const Fraction& left, const Fraction& right);
        friend bool operator!=(const Fraction& left, const Fraction& right);
        friend bool operator<(const Fraction& left, const Fraction& right);
        friend bool operator<=(const Fraction& left, const Fraction& right);
        friend bool operator>(const Fraction& left, const Fraction& right);
        friend bool operator>=(const Fraction& left, const Fraction& right);
        // extraction operator and insertion operator
        friend istream& operator>>(istream& left, Fraction& right);
        friend ostream& operator<<(ostream& left, Fraction& right);
};
#endif