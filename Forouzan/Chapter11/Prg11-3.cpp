/********************************************
 * An implementation file for Person class  *
********************************************/
#include "person.h"

// default constructor
Person::Person()
: identity(0)
{
}
// parameter constructor
Person::Person(long id)
: identity(id)
{
    assert(100000000 <= identity && identity <= 999999999);
}
// copy constructor
Person::Person(const Person& person)
: identity(person.identity)
{
}
// destructor
Person::~Person()
{
}
// getter member function
void Person::print() const
{
    cout << "Identity : " << identity << endl;
}