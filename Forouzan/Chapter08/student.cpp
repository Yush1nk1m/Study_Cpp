/****************************************************
 * An implementation file for the interface file    *
 * [Program 8-10]                                   *                                 
****************************************************/
#include "student.h"

// default constructor
Student::Student()
{
}
// parameter constructor
Student::Student(string name, int score)
: name(name), score(score)
{
    char temp[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
    grade = temp[score / 10];
}
// destructor
Student::~Student()
{
}
// print member function
void Student::print()
{
    cout << setw(12) << left << name;
    cout << setw(8) << right << score;
    cout << setw(8) << right << grade << endl;
}