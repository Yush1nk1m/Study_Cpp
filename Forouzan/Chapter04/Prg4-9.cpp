/********************************************************************
 * A program which finds out leap year after checking 3 conditions  *
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int year;
    bool divBy400, divBy4, divBy100;
    bool leapYear;
    // receive input
    cout << "Enter an year : ";
    cin >> year;
    // set conditions
    divBy400 = ((year % 400) == 0);
    divBy4 = ((year % 4) == 0);
    divBy100 = ((year % 100) == 0);
    leapYear = (divBy400) || (divBy4 && !(divBy100));
    // decision making and print
    if (leapYear)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}