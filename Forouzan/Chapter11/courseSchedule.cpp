/****************************************************
 * An implementation file for StudentSchedule class *
****************************************************/
#include "studentSchedule.h"

// constructor
StudentSchedule::StudentSchedule()
: size(0)
{
    courseNames = new string[5];
}
// destructor
StudentSchedule::~StudentSchedule()
{
    delete[] courseNames;
}
// definition of addCourse function
void StudentSchedule::addCourse(string name)
{
    courseNames[size++] = name;
}
// definition of print function
void StudentSchedule::print() const
{
    cout << "Student's course schedule" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << courseNames[i] << endl;
    }
    cout << endl;
}