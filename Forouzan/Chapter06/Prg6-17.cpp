/********************************************************************
 * A program which calculates grade based on the score of student   *
 * with input, process, output functions                            *
********************************************************************/
#include <iostream>
using namespace std;

// function declaration
int getScore();
char findGrade(int score);
void printResult(int score, char grade);

int main()
{
    // declaration
    int score;
    char grade;
    // function call
    score = getScore();
    grade = findGrade(score);
    printResult(score, grade);
    return 0;
}

/****************************************************************************
 * getScore function is an input function with additional effect            *
 * it receives a score from the user and return-by-value to main function   *
 * a form which returns local variable score                                *
 * in the function, data validation which confirms if an integer            *
 * is in range between 0 and 100                                            *
****************************************************************************/
int getScore()
{
    int score;      // local declaration
    do
    {
        cout << "Enter a score(0 ~ 100) : ";
        cin >> score;
    } while (score < 0 || score > 100);
    
}
/****************************************************************************
 * findGrade function is a pass-by-value mechanism                          *
 * which returns grade as value after calculating a grade(A, B, C, D, F)    *
 * based on the passed argument score                                       *
 * in this situation, if-else conditional statement has been used           *
 * but it is easy to implement it with switch conditional statement         *
****************************************************************************/
char findGrade(int score)
{
    char grade;     // local declaration
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
    return grade;
}
/****************************************************************
 * A function which prints the score and a grade of that score  *
****************************************************************/
void printResult(int score, char grade)
{
    cout << endl << "The result of the exam" << endl;
    cout << "Score = " << score << "/100"<< endl;
    cout << "Grade = " << grade << endl;
    return;
}