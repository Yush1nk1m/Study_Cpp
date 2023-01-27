/********************************************************
 * An implementation file for Student concrete class    *
********************************************************/
#include "student3.h"

// constructor
Student::Student(string name, double gpa)
: Person(name)
{
    this->gpa = gpa;        // assignment
}
// printGPA member function
void Student::printGPA() const
{
    cout << "GPA : " << fixed << setprecision(2) << gpa << endl;
}
// print member function
void Student::print() const
{
    Person::print();
    printGPA();
}