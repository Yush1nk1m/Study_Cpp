/**********************************************************
 * A program which prints day of week                     *
 * with switch conditional statement and break statement  *
**********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int day;
    // receive input
    cout << "Enter an integer from 0 to 6" << endl;
    cin >> day;
    // switch conditional statement(makes decision and prints)
    switch (day)
    {
        case 0: cout << "Sunday" << endl;
                cout << "The first day of week" << endl;
                break;
        case 1: cout << "Monday" << endl;
                break;
        case 2: cout << "Tuesday" << endl;
                break;
        case 3: cout << "Wednesday" << endl;
                break;
        case 4: cout << "Thursday" << endl;
                break;
        case 5: cout << "Friday" << endl;
                break;
        case 6: cout << "Saturday" << endl;
                cout << "The last day of week" << endl;
                break;  // no need to include
    }   // end of switch statement
    return 0;
}