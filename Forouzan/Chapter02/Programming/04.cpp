#include <iostream>
using namespace std;

int main() {
    const unsigned int secPerHour = 3600;
    const unsigned int secPerMinute = 60;
    
    int hour;
    int minute;
    int second;

    cout << "Enter the hour : ";
    cin >> hour;
    cout << "Enter the minute : ";
    cin >> minute;
    cout << "Enter the second : ";
    cin >> second;

    second += hour * secPerHour + minute * secPerMinute;
    cout << "The total second is " << second << " seconds.";

    return 0;
}