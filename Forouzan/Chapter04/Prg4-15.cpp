/*****************************************************************************
 * A program which receives three scores and                                 *
 * finds out average of scores based on minimum value and maximum value and  *
 * finds out student's grade                                                 *
*****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int score1, score2, score3, minScore, maxScore, score;
    // receive input
    cout << "Enter the first integer : ";
    cin >> score1;
    cout << "Enter the second integer : ";
    cin >> score2;
    cout << "Enter the third integer : ";
    cin >> score3;
    // find out the maximum integer
    if (score1 > score2 && score1 > score3)
    {
        maxScore = score1;
    }
    else if (score2 > score1 && score2 > score3)
    {
        maxScore = score2;
    }
    else
    {
        maxScore = score3;
    }
    // find out the minimum integer
    if (score1 < score2 && score1 < score3)
    {
        minScore = score1;
    }
    else if (score2 < score1 && score2 < score3)
    {
        minScore = score2;
    }
    else
    {
        minScore = score3;
    }
    // calculate and round student's grade
    int temp = maxScore + minScore;
    if (temp % 2 == 1)
    {
        temp += 1;
    }
    score = temp / 2;
    // print the result
    cout << "Entered score = " << score1 << " " << score2 << " " << score3 << endl;
    cout << "The minimum score and the maximum score : ";
    cout << minScore << " " << maxScore << endl;
    cout << "Student's score : " << score;
    return 0;
}