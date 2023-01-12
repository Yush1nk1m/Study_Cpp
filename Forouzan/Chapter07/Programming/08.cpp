#include <iostream>
#include "08.h"
using namespace std;

Zeller::Zeller(int year, int month, int day)
: year(year), month(month), day(day)
{
}

int Zeller::getWeekday() const
{
    return (day + 26 * (month + 1) / 10 + year + year / 4 - year / 100 + year / 400) % 7;
}