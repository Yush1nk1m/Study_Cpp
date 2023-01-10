#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979323846;
    cout << fixed << setprecision(2);
    cout << "sin(0) = " << sin(0) << endl;
    cout << "sin(PI) = " << sin(PI) << endl;
    cout << "cos(0) = " << cos(0) << endl;
    cout << "cos(PI) = " << cos(PI) << endl;
    cout << "tan(0) = " << tan(0) << endl;
    cout << "tan(1) = " << tan(1) << endl;
    cout << "asin(0) = " << asin(0) << endl;
    cout << "asin(1) = " << asin(1) << endl;
    cout << "acos(0) = " << acos(0) << endl;
    cout << "acos(1) = " << acos(1) << endl;
    cout << "atan(0) = " << atan(0) << endl;
    cout << "atan(1) = " << atan(1) << endl;
    return 0;
}