/********************************************
 * An implementation file for Person class  *
********************************************/
#include "person2.h"

// constructor
Person::Person(string name)
: name(name)
{
}
// destructor
Person::~Person()
{
}
// print member function
void Person::print() const
{
    cout << "Person" << endl;
    cout << "Name : " << name << endl << endl;
}