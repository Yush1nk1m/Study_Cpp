/****************************************************
 * A program which uses user-defined manipulator    *
****************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

ostream& currency(ostream& stream)
{
    cout << '$';
    stream.precision(2);
    stream.fill('*');
    stream.setf(ios::fixed, ios::floatfield);
    return stream;
}

int main()
{
    cout << currency << setw(12) << 12325.45 << endl;
    cout << currency << setw(12) << 0.36 << endl;
}