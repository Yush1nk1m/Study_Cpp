/********************************************************************************
 * time.cpp interface file for the definition of Time class' member functions   *
********************************************************************************/
#include <cmath>
#include <cassert>
#include "time.h"
/********************************************************************************
 * Parameter constructor receives 3 values and generate an object initialized   *
 * increases hours, minuts, seconds and check if it is wrong value or not       *
********************************************************************************/
Time::Time(int hr, int mi, int se)
: hours(hr), minutes(mi), seconds(se)
{
    normalize();
}
/****************************************
 * Default constructor of Time object   *
****************************************/
Time::Time()
: hours(0), minutes(0), seconds(0)
{
}
/********************************************
 * There's no extra work in the destructor  *
********************************************/
Time::~Time()
{
}
/****************************************
 * print function is a getter function  *
 * which prints time on the screen      *
****************************************/
void Time::print() const
{
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
/****************************************
 * tick function is a setter function   *
 * which adds time by 1 second          *
****************************************/
void Time::tick()
{
    seconds++;
    normalize();
}
/************************************************************
 * normalize function checks class invariant,               *
 * stops the program when the invariant isn't satisfied     *
 * or increases hours, minutes, seconds                     *
************************************************************/
void Time::normalize()
{
    // process negative number
    if ((hours < 0) || (minutes < 0) || (seconds < 0))
    {
        cout << "Invalid data. Terminate the program." << endl;
        assert(false);
    }
    // regulate range
    if (seconds > 59)
    {
        int temp = seconds / 60;
        seconds %= 60;
        minutes += temp;
    }
    if (minutes > 59)
    {
        int temp = minutes / 60;
        minutes %= 60;
        hours += temp;
    }
    if (hours > 23)
    {
        hours %= 24;
    }
}