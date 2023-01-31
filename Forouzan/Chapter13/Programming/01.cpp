#include "01.h"
/* Because the specification is ambiguous, skipping assert condition check is needed. */
Time::Time()
: hour(12), minute(0), second(0), isAfternoon(false)
{
}

Time::Time(const Time& time)
: hour(time.hour), minute(time.minute), second(time.second), isAfternoon(time.isAfternoon)
{
}

Time::Time(int hour, int minute, int second, bool isAfternoon)
: hour(hour), minute(minute), second(second), isAfternoon(isAfternoon)
{
}

Time::~Time()
{
}

Time& Time::operator++()
{
    second += 1;
    if (second > 59)
    {
        second = 0;
        minute += 1;
        if (minute > 59)
        {
            minute = 0;
            hour += 1;
            if (hour > 12)
            {
                hour = 1;
                isAfternoon = !isAfternoon;
            }
        }
    }
    return (*this);
}

int Time::operator()() const
{
    Time time(12, 0, 0, false);
    int count = 0;
    while (time.hour != hour || time.minute != minute || time.second != second || time.isAfternoon != isAfternoon)
    {
        ++time.second;
        ++count;
        if (time.second > 59)
        {
            time.second = 0;
            time.minute += 1;
            if (time.minute > 59)
            {
                time.minute = 0;
                time.hour += 1;
                if (time.hour > 12)
                {
                    time.hour = 1;
                    time.isAfternoon = !(time.isAfternoon);
                }
            }
        }
    }
    return count;
}

Time& Time::operator+=(int seconds)
{
    for (int i = 0; i < seconds; i++)
    {
        ++(*this);
    }
    return (*this);
}