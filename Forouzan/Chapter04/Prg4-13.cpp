/***************************************************************
 * Find out pass/fail grade with switch conditional statement  *
***************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    char grade;
    // receive input
    cout << "Enter a letter grade(A, B, C, D, F) : ";
    cin >> grade;
    // decision making
    switch (grade)
    {
        case 'A':
        case 'B':
        case 'C': cout << "PASSED";
                  break;
        case 'D':
        case 'F': cout << "FAILED";
                  break;
        default:  cout << "Input error, try again.";
    }   // end of switch statement
    return 0;
}