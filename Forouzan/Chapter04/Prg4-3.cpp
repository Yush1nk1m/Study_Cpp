/**************************************************************
 * Find out pass/fail grade with if-else condition statement  *
**************************************************************/
#include <iostream>
using namespace std;

int main() {
    // variable declaration
    int score;
    // receive input
    cout << "Enter a score between 0 and 100 : ";
    cin >> score;
    // decision making
    if (score >= 70)
    {
        cout << "PASS" << endl;
    }   // end of if statement
    else
    {
        cout << "FAIL" << endl;
    }   // end of else statement
    return 0;
}