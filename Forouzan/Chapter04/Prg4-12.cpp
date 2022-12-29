/********************************************************
 * Print a grade based on score with switch conditions  *
********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int score;
    char grade;
    // receive input
    cout << "Enter a score in range between 0 and 100 : ";
    cin >> score;
    // decision making
    switch (score / 10)
    {
        case 10: grade = 'A';
                 break;
        case 9 : grade = 'A';
                 break;
        case 8 : grade = 'B';
                 break;
        case 7 : grade = 'C';
                 break;
        case 6 : grade = 'D';
                 break;
        default: grade = 'F';
    }   // end of switch statement
    // print
    cout << "Score : " << score << endl;
    cout << "Grade : " << grade << endl;
    return 0;
}