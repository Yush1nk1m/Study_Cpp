#include <iostream>
using namespace std;

int main()
{
    int year, month, day, weekday;

    cout << "Enter the year of the date : ";
    cin >> year;
    cout << "Enter the month of the date : ";
    cin >> month;
    cout << "Enter the day of the date : ";
    cin >> day;
    
    weekday = (day + 26 * (month + 1) / 10 + year + year / 4 - year / 100 + year / 400) % 7;

    switch (weekday)
    {
        case 0: cout << "MONDAY" << endl;
                break;
        case 1: cout << "TUESDAY" << endl;
                break;
        case 2: cout << "WEDNESDAY" << endl;
                break;
        case 3: cout << "THURSDAY" << endl;
                break;
        case 4: cout << "FRIDAY" << endl;
                break;
        case 5: cout << "SATURDAY" << endl;
                break;
        case 6: cout << "SUNDAY" << endl;
                break;
    }

    return 0;
}