/************************************************
 * An interface file defining Fraction class    *
************************************************/
#include <iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
    // data member
    private:
        int numer;
        int denom;
    
    // public member function
    public:
        // constructor
        Fraction(int num, int den);
        Fraction();
        Fraction(const Fraction& fract);
        ~Fraction();
        // getter
        int getNumer() const;
        int getDenom() const;
        void print() const;
        // setter
        void setNumer(int num);
        void setDenom(int den);

    // private helper member function
    private:
        void normalize();
        int gcd(int n, int m);
};
#endif