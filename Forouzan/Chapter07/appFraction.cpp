/****************************************************************
 * An application file appFraction.cpp using Fraction objects   *
****************************************************************/
#include "fraction.h"
#include <iostream>
using namespace std;

int main()
{
    // object instantiation
    Fraction fract1;
    Fraction fract2(14, 21);
    Fraction fract3(11, -8);
    Fraction fract4(fract3);
    // print object
    cout << "Print 4 fractions created : " << endl;
    cout << "fract1 : ";
    fract1.print();
    cout << "fract2 : ";
    fract2.print();
    cout << "fract3 : ";
    fract3.print();
    cout << "fract4 : ";
    fract4.print();
    // use setter
    cout << "Change two fractions and print them : " << endl;
    fract1.setNumer(4);
    cout << "fract1 : ";
    fract1.print();
    fract2.setDenom(-5);
    cout << "fract2 : ";
    fract2.print();
    // use getter
    cout << "Check numerator and denominator separately with getter : " << endl;
    cout << "Numerator of fract1 : " << fract1.getNumer() << endl;
    cout << "Denominator of fract2 : " << fract2.getDenom() << endl;
    return 0;
}