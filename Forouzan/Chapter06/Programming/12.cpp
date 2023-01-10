#include <iostream>
using namespace std;

double F2C(double);

int main()
{
    cout << "32 Fahrenheit = " << F2C(static_cast<double>(32)) << " Celsius" << endl;
    cout << "98.6 Fahrenheit = " << F2C(98.6) << " Celsius" << endl;
    cout << "104 Fahrenheit = " << F2C(static_cast<double>(104)) << " Celsius" << endl;
    cout << "212 Fahrenheit = " << F2C(static_cast<double>(212)) << " Celsius" << endl;
    return 0;
}

double F2C(double F)
{
    return (F - 32) * (100.0 / 180.0);
}