/********************************************************
 * A program runs air conditioner based on temperature  *
********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int temperature;
    bool hot, cold;
    // receive input
    cout << "Enter the current temperature : ";
    cin >> temperature;
    // find out conditions
    hot = temperature >= 23;
    cold = temperature <= 15;
    // decision making
    if (hot || cold)
    {
        cout << "The air conditioner has been turned on." << endl;

        if (hot)
        {
            cout << "Air-conditioning" << endl;
        }
        else
        {
            cout << "Heating system" << endl;
        }
    }
    else
    {
        cout << "The air conditioner has been turned off." << endl;
    }
    return 0;
}