/****************************************************
 * Use manipulators associated with floating point  *
****************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // declaration
    double x = 1237234.1235;
    // manipulate basic way of print
    cout << fixed << setprecision(2) << showpos << setfill('*');
    // print x in three forms
    cout << setw(15) << left << x << endl;
    cout << setw(15) << internal << x << endl;
    cout << setw(15) << right << x << endl;
    return 0;
}