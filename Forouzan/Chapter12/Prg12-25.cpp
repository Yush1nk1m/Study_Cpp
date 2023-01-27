/********************************************
 * An implementation file for Student class *
********************************************/
#include "student2.h"

// constructor
Student::Student(string name, double gpa)
: Person(name), gpa(gpa)
{
    assert(gpa >= 0.0 && gpa <= 4.0);
}
// destructor
Student::~Student()
{
}
// print member function which uses protected data member
void Student::print() const
{
    cout << "Student" << endl;
    cout << "Name : " << name << "   ";
    cout << "GPA : " << gpa << endl << endl;
}