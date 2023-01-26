/************************************************
 * An implementation file for Employee class    *
************************************************/
#include "employee2.h"

// constructor for Employee class
Employee::Employee(string name, double salary)
: Person(name), salary(salary)
{
}
// destructor for Employee class
Employee::~Employee()
{
}
// definition for print member function
void Employee::print() const
{
    Person::print();
    cout << "Salary : " << salary << endl;
}