/***************************************************************************
 * A program which finds out grade with various direction condition split  *
***************************************************************************/
#include <iostream>
using namespace std;

int main() {
    // variable declaration
    int score;
    char grade;
    // receive input
    cout << "Enter a score between 0 and 100 : ";
    cin >> score;
    // various direction condition split with if-else condition statement
    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }
    else if (score >= 70)
    {
        grade = 'C';
    }
    else if (score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    // print
    cout << "The final grade : " << grade;
    return 0;
}   // end of main function