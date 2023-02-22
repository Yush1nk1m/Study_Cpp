#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int int1 = 1, int2 = 2;
    cout << "max(int1, int2) = " << max(int1, int2) << endl;
    cout << "min(int1, int2) = " << min(int1, int2) << endl << endl;

    string string1("ABC"), string2("BCD");
    cout << "max(string1, string2) = " << max(string1, string2) << endl;
    cout << "min(string1, string2) = " << min(string1, string2) << endl << endl;

    double double1 = 1.1, double2 = 2.2;
    cout << "max(double1, double2) = " << max(double1, double2) << endl;
    cout << "min(double1, double2) = " << min(double1, double2) << endl;

    return 0;
}