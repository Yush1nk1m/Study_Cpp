/********************************************
 * An implementation file for Date class    *
********************************************/
#include "date.h"

// parameter constructor
Date::Date(int month, int day, int year)
: month(month), day(day), year(year)
{
    if (!isValid())
    {
        cout << "It is an invalid date. Terminate the program." << endl;
        assert(false);
    }
}
// default constructor
Date::Date()
: month(1), day(1), year(1900)
{
}
// destructor
Date::~Date()
{
}
// prefix increment operator
Date& Date::operator++()
{
    day++;
    plusReset();
    return (*this);
}
// prefix decrement operator
Date& Date::operator--()
{
    day--;
    minusReset();
    return (*this);
}
// postfix increment operator
Date Date::operator++(int)
{
    Date temp(month, day, year);
    ++(*this);
    return temp;
}
// postfix decrement operator
Date Date::operator--(int)
{
    Date temp(month, day, year);
    --(*this);
    return temp;
}
// complex assignment operator +=
Date& Date::operator+=(int days)
{
    for (int i = 0; i < days; i++)
    {
        ++(*this);
    }
    return (*this);
}
// complex assignment operator -=
Date& Date::operator-=(int days)
{
    for (int i = 0; i < days; i++)
    {
        --(*this);
    }
    return (*this);
}
// == operator
bool Date::operator==(const Date& right) const
{
    bool fact1 = (month == right.month);
    bool fact2 = (day == right.day);
    bool fact3 = (year == right.year);
    return (fact1 && fact2 && fact3);
}
// != operator
bool Date::operator!=(const Date& right) const
{
    return !(*this == right);
}
// assignment operator
Date& Date::operator=(const Date& right)
{
    if (*this != right)
    {
        month = right.month;
        day = right.day;
        year = right.year;
    }
    return (*this);
}
// friend subtraction operator
int operator-(const Date& date1, const Date& date2)
{
    return (date1.findTotalDays() - date2.findTotalDays());
}
// friend << operator
ostream& operator<<(ostream& output, const Date& date)
{
    output << Date::daysOfWeek[(date.findTotalDays() + Date::startWeekDay) % 7] << " ";
    output << Date::monthsOfYear[date.month] << " ";
    output << date.day << " " << date.year << endl;
    return output;
}
// data validation helper function
bool Date::isValid() const
{
    bool validMonth = (month >= 1) && (month <= 12);
    bool validYear = (year >= startYear);
    bool validDay = (day >= 1) && (day <= (Date::daysInMonths[month] + (isLeap(year) && month == 2)));
    return (validMonth && validYear && validDay);
}
// helper function which organizes after addition
void Date::plusReset()
{
    bool extraDay = (isLeap(year) && (month == 2));
    if (day > daysInMonths[month] + extraDay)
    {
        day = 1;
        month++;
    }
    if (month > 12)
    {
        month = 1;
        year++;
    }
}
// helper function which organizes after subtraction
void Date::minusReset()
{
    if (day < 1)
    {
        month--;
        if (month < 1)
        {
            month = 12;;
            year--;
        }
        bool extraDay = isLeap(year) && (month == 2);
        day = daysInMonths[month] + extraDay;
    }
}
// helper function which finds out the total number of days
int Date::findTotalDays() const
{
    int totalDays = 0;
    int currentYear = startYear;
    while (year > currentYear)
    {
        totalDays += (365 + isLeap(currentYear));
        currentYear++;
    }
    int currentMonth = 1;
    while (month > currentMonth)
    {
        totalDays += daysInMonths[currentMonth];
        if (currentMonth == 2)
        {
            totalDays += isLeap(year);
        }
        currentMonth++;
    }
    totalDays += (day - 1);
    return totalDays;
}
// static data member initialization
const int Date::startWeekDay = 1;
const int Date::startYear = 1900;
const int Date::daysInMonths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const string Date::daysOfWeek[] = {"Sun", "Mon", "Tue", "Wed", "Thr", "Fri", "Sat"};
const string Date::monthsOfYear[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
// static member function definition
