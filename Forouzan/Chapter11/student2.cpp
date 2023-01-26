/********************************************
 * An implementation file for Student class *
********************************************/
#include "student2.h"

// constructor for Student class
Student::Student(string name, double gpa)
: Person(name), gpa(gpa)
{
}
// destructor for Student class
Student::~Student()
{
}
// definition for print member function
void Student::print() const
{
    Person::print();
    cout << "GPA : " << gpa << endl;
}