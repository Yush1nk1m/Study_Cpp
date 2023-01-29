/****************************************************
 * An application file which uses SmartPtr class    *
****************************************************/
#include "smartptr.h"

int main()
{
    // create a smart pointer
    SmartPtr sp = new Fraction(2, 5);
    // access to the member with indirection operator(*)
    cout << "Fraction : " << endl;
    (*sp).print();
    // access to the member with selection operator(->)
    cout << "Fraction : " << endl;
    sp->print();
    cout << endl;
    return 0;
}