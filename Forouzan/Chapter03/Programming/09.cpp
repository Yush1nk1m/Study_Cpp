#include <iostream>
using namespace std;

int main() {
    long seconds, minutes, hours;
    cout << "Enter seconds in an integer number : ";
    cin >> seconds;

    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;

    cout << "Hour : " << hours << endl;
    cout << "Minute : " << minutes << endl;
    cout << "Seconds : " << seconds << endl;

    return 0;
}