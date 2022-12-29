#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter a temperature in celsius : ";
    cin >> celsius;

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    cout << "the fahrenheit temperature of given celsius temerature : " << fahrenheit << endl;

    return 0;
}