/************************************************
 * An application file which uses Poly class    *
************************************************/
#include "poly.h"

int main()
{
    // create polynomial expressions and receive inputs
    Poly poly1(5);
    poly1.fill();
    Poly poly2(2);
    poly2.fill();
    // output
    cout << "The state of the polynomial expressions" << endl;
    cout << "poly1 = " << poly1 << endl;
    cout << "poly2 = " << poly2 << endl << endl;
    // use operators
    Poly poly3 = poly1 + poly2;
    Poly poly4 = poly1 - poly2;
    Poly poly5 = poly1 * poly2;
    Poly poly6 = poly1 / poly2;
    Poly poly7 = poly1 % poly2;
    // print the results
    cout << "The results of polynomial operations" << endl;
    cout << "poly1 + poly2 = " << poly3 << endl;
    cout << "poly1 - poly2 = " << poly4 << endl;
    cout << "poly1 * poly2 = " << poly5 << endl;
    cout << "poly1 / poly2 = " << poly6 << endl;
    cout << "poly1 %% poly2 = " << poly7 << endl;
    return 0;
}