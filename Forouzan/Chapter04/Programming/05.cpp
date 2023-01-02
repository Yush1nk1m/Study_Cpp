#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3;
    double average;
    char grade;

    cout << "Enter the first score(0 ~ 100) : ";
    cin >> score1;
    cout << "Enter the second score(0 ~ 100) : ";
    cin >> score2;
    cout << "Enter the third score(0 ~ 100) : ";
    cin >> score3;
    
    average += (score1 + score2 + score3) / static_cast<double>(3);

    if (average > 90)
    {
        grade = 'A';
    }
    else if (average > 80)
    {
        if (score3 > 90)
        {
            grade = 'A';
        }
        else
        {
            grade = 'B';
        }
    }
    else if (average > 70)
    {
        if (score3 > 80)
        {
            grade = 'B';
        }
        else
        {
            grade = 'C';
        }
    }
    else if (average > 60)
    {
        if (score3 > 70)
        {
            grade = 'C';
        }
        else
        {
            grade = 'D';
        }
    }
    else
    {
        if (score3 > 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
    }

    cout << "The average of three scores : " << average << endl;
    cout << "Grade : " << grade << endl;

    return 0;
}