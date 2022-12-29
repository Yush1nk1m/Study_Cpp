#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;
    
    cout << "Enter a temperature in fahrenheit : ";
    cin >> fahrenheit;

    celsius = (fahrenheit - static_cast<double>(32)) * (static_cast<double>(5) / static_cast<double>(9));
    cout << "The celsius temperature of given fahrenheit temperature : " << celsius << endl;

    return 0;
}