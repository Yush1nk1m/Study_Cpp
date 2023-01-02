/**********************************************
 * A program which finds out what the order   *
 * of given input date                        *
**********************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int year;
    int month;
    int day;
    int totalDays = 0;
    bool isLeap;
    // receive input
    cout << "Enter the year of the date : ";
    cin >> year;
    isLeap = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
    cout << "Enter the month of the date : ";
    cin >> month;
    cout << "Enter the day of the date : ";
    cin >> day;
    // the number of days of each month
    int m01 = 31;
    int m02 = 28;
    int m02l = 29;
    int m03 = 31;
    int m04 = 30;
    int m05 = 31;
    int m06 = 30;
    int m07 = 31;
    int m08 = 31;
    int m09 = 30;
    int m10 = 31;
    int m11 = 30;
    // calculate the number of days to specific month using switch conditional statement
    switch (month)
    {
        case 12 : totalDays += m11;
        case 11 : totalDays += m10;
        case 10 : totalDays += m09;
        case 9  : totalDays += m08;
        case 8  : totalDays += m07;
        case 7  : totalDays += m06;
        case 6  : totalDays += m05;
        case 5  : totalDays += m04;
        case 4  : totalDays += m03;
        case 3  : if (isLeap) totalDays += m02l;
                  else totalDays += m02;
        case 2  : totalDays += m01;
        case 1  : totalDays += 0;
    }
    // find out the final result
    totalDays += day;
    // print result
    cout << "This year's " << totalDays << "th day." << endl;
    return 0;
}