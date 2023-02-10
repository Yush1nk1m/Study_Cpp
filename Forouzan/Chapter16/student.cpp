/********************************************
 * An implementation file for Student class *
********************************************/
#include "student.h"

// parameter constructor
Student::Student(int id, const string& name, double gpa)
: stdId(id), stdGpa(gpa)
{
    strcpy(stdName, name.c_str());
    if (stdId < 1 || stdId > 99)
    {
        cout << "Student id is out of range. Stop the program." << endl;
        assert(false);
    }
    if (stdGpa < 0.0 || stdGpa > 4.0)
    {
        cout << "Gpa is out of range. Stop the program." << endl;
        assert(false);
    }
}
// default constructor
Student::Student()
{
}
// destructor
Student::~Student()
{
}
// getter function
int Student::getId() const
{
    return stdId;
}
// getter function
string Student::getName() const
{
    return stdName;
}
// getter function
double Student::getGpa() const
{
    return stdGpa;
}
