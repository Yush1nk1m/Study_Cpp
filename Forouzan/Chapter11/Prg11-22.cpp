/************************************************
 * An implementation file for Employee class    *
************************************************/
#include "employee4.h"

// constructor
Employee::Employee(string first, string init, string last, double salary)
: name(first, init, last), salary(salary)
{
    assert(0.0 < salary && salary < 100000.0);
}
// destructor
Employee::~Employee()
{
}
// print member function
void Employee::print() const
{
    name.print();
    cout << "Salary : " << salary << endl << endl;
}