/********************************************************************
 * A program which implements boolalpha and noboolalpha manipulator *
********************************************************************/
#include <iostream>
using namespace std;

// definition of user-defined manipulator alpha
ostream& alpha(ostream& os)
{
    os.setf(ios::boolalpha);
    return os;
}
// definition of user-defined manipulator noalpha
ostream& noalpha(ostream& os)
{
    os.unsetf(ios::boolalpha);
    return os;
}

int main()
{
    // bool data type variables declaration and initialization
    bool b1 = false;
    bool b2 = true;
    // print variables with manipulators
    cout << alpha << b1 << " " << b2 << endl;
    cout << noalpha << b1 << " " << b2 << endl;
    return 0;
}