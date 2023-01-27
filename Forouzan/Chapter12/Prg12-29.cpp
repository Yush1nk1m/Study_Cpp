/****************************************
 * An implementation file for TA class  *
****************************************/
#include "ta.h"

// constructor
TA::TA(string name, double gpa, double salary)
: Person(name), Student(name, gpa), Professor(name, salary)
{
}
// destructor
TA::~TA()
{
}
// print member function
void TA::print() const
{
    cout << "Teaching Assistance" << endl;
    cout << "Name : " << name << "   ";
    cout << "GPA : " << gpa << "   ";
    cout << "Salary : " << salary << endl << endl;
}