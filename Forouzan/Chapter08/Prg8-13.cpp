/****************************************************************
 * A program which utilizes scores and averages of students     *
 * with two-dimensional array                                   *
****************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/********************************************************************************
 * Receive the scores of students as the first argument of 2-d array            *
 * and find out the average of exam scores, return it to the second argument    *
********************************************************************************/
void findStudentAverage(const int scores[][3], double stdAver[], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colSize; j++)
        {
            sum += scores[i][j];
        }
        double average = static_cast<double>(sum) / colSize;
        stdAver[i] = average;
    }
    return;
}
/********************************************************************************
 * Receive the scores of students as the first argument of 2-d array            *
 * and find out the average of student scores, return it to the second argument *
********************************************************************************/
void findTestAverage(const int scores[][3], double tstAver[], int rowSize, int colSize)
{
    for (int j = 0; j < colSize; j++)
    {
        int sum = 0;
        for (int i = 0; i < rowSize; i++)
        {
            sum += scores[i][j];
        }
        double average = static_cast<double>(sum) / rowSize;
        tstAver[j] = average;
    }
    return;
}

int main()
{
    // array and variable declaration
    const int rowSize = 5;
    const int colSize = 3;
    int scores[rowSize][colSize] = {{82, 65, 72},
                                    {73, 70, 80},
                                    {91, 67, 40},
                                    {72, 72, 68},
                                    {65, 90, 80}};
    double stdAver[rowSize];
    double tstAver[colSize];
    // call two functions which modify arrays
    findStudentAverage(scores, stdAver, rowSize, colSize);
    findTestAverage(scores, tstAver, rowSize, colSize);
    // print header
    cout << "\t      Exam score   \t       Average" << endl;
    cout << "\t  -----------------\t       -------" << endl;
    // print scores and averages
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << setw(12) << scores[i][j];
        }
        cout << fixed << setprecision(2) << "   " << stdAver[i] << endl;
    }
    // print average
    cout << "---------------------------------------------" << endl;
    cout << "The final score\t";
    for (int j = 0; j < colSize; j++)
    {
        cout << fixed << setprecision(2) << stdAver[j] << "\t";
    }
    cout << endl;
    return 0;
}