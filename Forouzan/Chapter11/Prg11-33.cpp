/****************************************************
 * An implementation file for CourseRoster class    *
****************************************************/
#include "courseRoster.h"

// constructor
CourseRoster::CourseRoster()
: size(0)
{
    stdNames = new string[20];
}
// destructor
CourseRoster::~CourseRoster()
{
    delete[] stdNames;
}
// definition of addStudent function
void CourseRoster::addStudent(string studentName)
{
    stdNames[size++] = studentName;
}
// definition of print function
void CourseRoster::print() const
{
    cout << "Course roster" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << stdNames[i] << endl;
    }
    cout << endl;
}