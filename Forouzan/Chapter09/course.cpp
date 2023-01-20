/********************************************************
 * An implementation file which defines every           *
 * private member function and public member function   *
********************************************************/
#include "course.h"
#include <iomanip>
#include <cmath>

/********************************************************************
 * in the constructor, open a file,                                 *
 * allocate a heap array, uses various helper functions             *
 * A program which initializes an array,                            *
 * finds out the grade, average, standard deviation and prints them *
********************************************************************/
Course::Course(int num, const char* ifn)
: numOfStds(num), inputFileName(ifn)
{
    inputFile.open(inputFileName);
    students = new Student[numOfStds];
    getInputs();
    setGrades();
    setAverage();
    setDeviations();
    printResult();
}
/****************************************************************
 * in the destructor, delete the array created in the heap      *
 * with a pointer and close the file opened at the constructor  *
****************************************************************/
Course::~Course()
{
    delete[] students;
    inputFile.close();
}
/************************************************************
 * getInputs function reads student numbers and scores of   *
 * students from the input file                             *
************************************************************/
void Course::getInputs()
{
    for (int i = 0; i < numOfStds; i++)
    {
        inputFile >> students[i].id;
        inputFile >> students[i].score;
    }
}
/************************************************************
 * setGrades function calculates the grades of students     *
 * based on their scores                                    *
************************************************************/
void Course::setGrades()
{
    char charGrades[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
    for (int i = 0; i < numOfStds; i++)
    {
        int index = students[i].score / 10;
        students[i].grade = charGrades[index];
    }
}
/************************************************************
 * setAverage function calculates the average               *
 * based on the scores of students in the array             *
************************************************************/
void Course::setAverage()
{
    int sum = 0;
    for (int i = 0; i < numOfStds; i++)
    {
        sum += students[i].score;
    }
    averageScore = static_cast<double>(sum) / numOfStds;
}
/************************************************************
 * setDeviations function calculates the standard deviation *
 * based on the scores and averages of the students         *
************************************************************/
void Course::setDeviations()
{
    standardDeviation = 0.0;
    for (int i = 0; i < numOfStds; i++)
    {
        students[i].deviation = students[i].score - averageScore;
        standardDeviation += pow(students[i].deviation, 2);
    }
    standardDeviation = sqrt(standardDeviation) / numOfStds;
}
/************************************************************
 * printResult function prints every information            *
************************************************************/
void Course::printResult() const
{
    cout << endl;
    cout << " ID  Score Grade StdDev." << endl;
    cout << "---- ----- ----- -------" << endl;
    for (int i = 0; i < numOfStds; i++)
    {
        cout << setw(4) << noshowpoint << noshowpos << right << students[i].id;
        cout << setw(14) << noshowpoint << noshowpos << right << students[i].score;
        cout << setw(10) << right << students[i].grade;
        cout << fixed << setw(20) << right << setprecision(2) << showpoint << showpos << students[i].deviation << endl;
    }
    cout << "The average score : " << fixed << setw(4) << setprecision(2) << averageScore << endl;
    cout << "Standard deviation : " << standardDeviation << endl;
}