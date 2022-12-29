/*****************************************************************
 * A program which prints from the specific day to the last day  *
 * of week using switch condition statement                      * 
*****************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int day;
    // receive input
    cout << "Enter an integer range from 0 to 6 : ";
    cin >> day;
    // switch conditional statement(makes decision and prints)
    switch (day)
    {
        case 0: cout << "Sunday" << endl;
        case 1: cout << "Monday" << endl;
        case 2: cout << "Turesday" << endl;
        case 3: cout << "Wednesday" << endl;
        case 4: cout << "Thursday" << endl;
        case 5: cout << "Friday" << endl;
        case 6: cout << "Saturday" << endl;
    }   // end of switch statement
    return 0;
}