/********************************************
 * An implementation file for Person class  *
********************************************/
#include "person2.h"

// constructor for Person class
Person::Person(string name)
: name(name)
{
}
// destructor for Person class
Person::~Person()
{
}
// definition for print member function
void Person::print() const
{
    cout << "Name : " << name << endl;
}