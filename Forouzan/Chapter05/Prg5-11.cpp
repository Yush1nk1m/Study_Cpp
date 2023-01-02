/*****************************************************************************
 * A program which prints a month in calendar form                           *
 * with inputs indicating day of the month and day of week of the first day  *
*****************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declaration and initialization
    int startDay;
    int daysInMonth;
    int col = 1;
    // check validity of day
    do
    {
        cout << "Enter the number of days in the month(28, 29, 30, 31) : ";
        cin >> daysInMonth;
    } while (daysInMonth < 28 || daysInMonth > 31);
    // check validity of day of week
    do
    {
        cout << "Enter the day of week of the first day in the month(0~6) : ";
        cin >> startDay;
    } while (startDay < 0 || startDay > 6);
    // print title
    cout << endl;
    cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
    cout << "--- --- --- --- --- --- ---" << endl;
    // print anterior margin of a calendar
    for (int space = 0; space < startDay; space++)
    {
        cout << "    ";
        col++;
    }
    // print calendar
    for (int day = 1; day <= daysInMonth; day++)
    {
        cout << setw(3) << day << " ";
        col++;
        if (col > 7)
        {
            cout << endl;
            col = 1;
        }
    }
    return 0;
}