#include "fraction.h"

Fraction& multiply(Fraction&, Fraction&);

int main()
{
    Fraction fract1, fract2;

    // example case
    fract1.setNumer(5);
    fract1.setDenom(9);
    fract2.setNumer(4);
    fract2.setDenom(7);

    Fraction& result = multiply(fract1, fract2);
    cout << "The result of fract1 * fract2 : ";
    result.print();

    return 0;
}

Fraction& multiply(Fraction& fract1, Fraction& fract2)
{
    fract1.setNumer(fract1.getNumer() * fract2.getNumer());
    fract1.setDenom(fract1.getDenom() * fract2.getDenom());
    return fract1;
}