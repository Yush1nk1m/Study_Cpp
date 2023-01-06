/*****************************************************************
 * A program which finds the current time with time(0) function  *
*****************************************************************/
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // find elapsed seconds and current second
    long elapsedSeconds = time(0);
    int currentSecond = elapsedSeconds % 60;
    // find elapsed minutes and current minute
    long elapsedMinutes = elapsedSeconds / 60;
    int currentMinute = elapsedMinutes % 60;
    // find elapsed hours and current hour
    long elapsedHours = elapsedMinutes / 60;
    int currentHour = elapsedHours % 24;
    // print current time
    cout << "Current time = ";
    cout << currentHour << " : " << currentMinute << " : " << currentSecond << endl;
    return 0;
}