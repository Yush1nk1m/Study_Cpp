/************************************************
 * An implementation file for TA concrete class *
************************************************/
#include "ta2.h"

// constructor
TA::TA(string name, double gpa, double salary)
: Person(name)
{
    this->gpa = gpa;            // assignment
    this->salary = salary;      // assignment
}
// printGPA member function
void TA::printGPA() const
{
    cout << "GPA : " << gpa << endl;
}
// printSalary member function
void TA::printSalary() const
{
    cout << "Salary : " << fixed << setprecision(2) << salary << endl;
}
// print member function
void TA::print() const
{
    Person::print();
    printGPA();
    printSalary();
}