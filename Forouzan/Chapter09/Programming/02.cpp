#include "fraction.h"

Fraction& max2(Fraction&, Fraction&);
Fraction& max3(Fraction&, Fraction&, Fraction&);

int main()
{
    Fraction fract1, fract2, fract3;
    int numerator, denominator;
    
    cout << "Enter the first fraction's numerator : ";
    cin >> numerator;
    fract1.setNumer(numerator);
    
    cout << "Enter the first fraction's denominator : ";
    cin >> denominator;
    fract1.setDenom(denominator);

    cout << "Enter the second fraction's numerator : ";
    cin >> numerator;
    fract2.setNumer(numerator);

    cout << "Enter the second fraction's denominator : ";
    cin >> denominator;
    fract2.setDenom(denominator);

    cout << "Enter the third fraction's numerator : ";
    cin >> numerator;
    fract3.setNumer(numerator);

    cout << "Enter the third fraction's denominator : ";
    cin >> denominator;
    fract3.setDenom(denominator);

    fract1.print();
    fract2.print();
    fract3.print();

    Fraction& maximum = max3(fract1, fract2, fract3);
    cout << "The maximum value among three fractions : ";
    maximum.print();

    return 0;
}

Fraction& max2(Fraction& fract1, Fraction& fract2)
{
    if (fract1.getNumer() * fract2.getDenom() > fract2.getNumer() * fract1.getDenom())
    {
        return fract1;
    }
    return fract2;
}

Fraction& max3(Fraction& fract1, Fraction& fract2, Fraction& fract3)
{
    Fraction& tempMax = max2(fract1, fract2);
    if (tempMax.getNumer() * fract3.getDenom() > fract3.getNumer() * tempMax.getDenom())
    {
        return tempMax;
    }
    return fract3;
}