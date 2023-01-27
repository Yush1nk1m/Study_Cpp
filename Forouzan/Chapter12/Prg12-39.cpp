/********************************************************
 * An implementation file for Professor concrete class  *
********************************************************/
#include "professor2.h"

// constructor
Professor::Professor(string name, double salary)
: Person(name)
{
    this->salary = salary;      // assignment
}
// printSalary member function
void Professor::printSalary() const
{
    cout << "Salary : " << fixed << setprecision(2) << salary << endl;
}
// print member function
void Professor::print() const
{
    Person::print();
    printSalary();
}