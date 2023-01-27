/****************************************************
 * An implementation file for Person concrete class *
****************************************************/
#include "person3.h"

// constructor
Person::Person(string name)
: name(name)
{
}
// print member function
void Person::print() const
{
    cout << "Name : " << name << endl;
}