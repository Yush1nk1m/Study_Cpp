#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    cout << "pow(5.0, 3) = " << pow(5.0, 3) << endl;
    cout << "pow(5, -3) = " << pow(5, -3) << endl;
    cout << "sqrt(44.56) = " << sqrt(44.56) << endl;
    cout << "exp(-6.2) = " << exp(-6.2) << endl;
    cout << "exp(44.26) = " << exp(44.26) << endl;
    cout << "log(16.2) = " << log(16.2) << endl;
    cout << "log10(14.24) = " << log10(14.24) << endl;
    return 0;
}