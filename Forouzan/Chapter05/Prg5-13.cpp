/********************************************************************
 * A program which uses do-while loop statement to data validation  *
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    int score;
    char grade;
    // receive input doing data validation
    do
    {
        cout << "Enter a score in range from 0 to 100 : ";
        cin >> score;
    } while (score < 0 || score > 100);
    // condition split
    switch (score / 10)
    {
        case 10: grade = 'A';
                 break;
        case 9:  grade = 'A';
                 break;
        case 8:  grade = 'B';
                 break;
        case 7:  grade = 'C';
                 break;
        case 6:  grade = 'D';
                 break;
        default: grade = 'F';
    }    
    // print
    cout << "Grade : " << grade << endl;
    return 0;
}