/************************************************************
 * A program which prints the number of day of some month   *
************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    int numberOfDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    // receive input and do data validation
    do
    {
        cout << "Enter the month(1 ~ 12) : ";
        cin >> month;
    } while (month < 1 || month > 12);
    // output
    cout << "The number of day of the input month : " << numberOfDays[month] << endl;
    return 0;
}