#include <iostream>
using namespace std;

int main()
{
    int hours, fare = 0;
    char vehicleType;

    cout << "Enter a type of vehicle(c, b, t) : ";
    cin >> vehicleType;
    cout << "Enter the hours the vehicle have been stayed in : ";
    cin >> hours;

    switch (vehicleType)
    {
        case 'c' : fare += (2 * hours); break;
        case 'b' : fare += (3 * hours); break;
        case 't' : fare += (4 * hours); break;
        default  : fare = 0;
    }

    cout << "The fare you have to pay : $" << fare << endl;
    
    return 0;
}