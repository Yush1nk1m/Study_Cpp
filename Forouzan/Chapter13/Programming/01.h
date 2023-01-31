/****************************************************************
 * The specification of this program is ambiguous.              *
 * Thus I will make something different but natural program.    *
****************************************************************/
#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <cassert>
using namespace std;

class Time
{
    private:
        int hour;
        int minute;
        int second;
        bool isAfternoon;
    public:
        Time();
        Time(const Time& time);
        Time(int hour, int minute, int second, bool isAfternoon);
        ~Time();
        int operator()() const;
        Time& operator++();
        Time& operator+=(int seconds);
};
#endif