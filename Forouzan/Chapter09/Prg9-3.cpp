/********************************************************************
 * A program which finds out the larger value between two values    *
 * after creating pairs of fractions and calling larger function    *
********************************************************************/
#include "fraction.h"

Fraction& larger(Fraction&, Fraction&);     // prototype

int main()
{
    // search the larger value after creating the first pair
    Fraction fract1(3, 13);
    Fraction fract2(5, 17);
    cout << "The larger fraction in the first pair : ";
    larger(fract1, fract2).print();
    // search the larger value after creating the second pair
    Fraction fract3(4, 9);
    Fraction fract4(1, 6);
    cout << "The larger fraction in the second pair : ";
    larger(fract3, fract4).print();
    return 0;
}
/********************************************************************
 * A function which receives the references of Fraction objects,    *
 * finds out the larger value, and returns it                       *
********************************************************************/
Fraction& larger(Fraction& fract1, Fraction& fract2)
{
    if (fract1.getNumer() * fract2.getDenom() > fract2.getNumer() * fract1.getDenom())
    {
        return fract1;
    }
    return fract2;
}