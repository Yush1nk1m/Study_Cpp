/********************************************
 * An implementation file for Date class    *
********************************************/
#include "date3.h"

// parameter constructor
Date::Date(int month, int day, int year)
: month(month), day(day), year(year)
{
    if ((month < 1) || (month > 12))
    {
        cout << "Month is out of range." << endl;
        assert(false);
    }
    int daysInMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((day < 1) || (day > daysInMonths[month]))
    {
        cout << "Day is out of range." << endl;
        assert(false);
    }
    if ((year < 1900) || (year > 2099))
    {
        cout << "Year is out of range." << endl;
        assert(false);
    }
}
// destructor
Date::~Date()
{
}
// print member function
void Date::print() const
{
    cout << month << "/" << day << "/" << year << endl;
}