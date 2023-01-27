/********************************************
 * An implementation file for Person class  *
********************************************/
#include "Person.h"

// definition of Person constructor
Person::Person(string name)
: name(name)
{
}
// definition of Person virtual destructor
Person::~Person()
{
}
// definition of print virtual function
void Person::print() const
{
    cout << "Name : " << name << endl;
}