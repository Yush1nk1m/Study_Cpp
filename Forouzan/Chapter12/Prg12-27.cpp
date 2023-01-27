/************************************************
 * An implementation file for Professor class   *
************************************************/
#include "professor.h"

// constructor
Professor::Professor(string name, double salary)
: Person(name), salary(salary)
{
}
// destructor
Professor::~Professor()
{
}
// print member function
void Professor::print() const
{
    cout << "Professor" << endl;
    cout << "Name : " << name << "   ";
    cout << "Salary : " << salary << endl << endl;
}