#include <iostream>
using namespace std;

double C2F(int);

int main()
{
    cout << "0 Celsius = " << C2F(0) << " Fahrenheit" << endl;
    cout << "37 Celsius = " << C2F(37) << " Fahrenheit" << endl;
    cout << "40 Celsius = " << C2F(40) << " Fahrenheit" << endl;
    cout << "100 Celsius = " << C2F(100) << " Fahrenheit" << endl;
    return 0;
}

double C2F(int C)
{
    return (C * 180.0 / 100.0 + 32);
}