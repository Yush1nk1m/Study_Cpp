/********************************************
 * An implementation file for Name class    *
********************************************/
#include "name4.h"

// constructor
Name::Name(string first, string init, string last)
: first(first), init(init), last(last)
{
    assert(init.size() == 1);
    toupper(first[0]);
    toupper(init[0]);
    toupper(last[0]);
}
// destructor
Name::~Name()
{
}
// print member function
void Name::print() const
{
    cout << "Name of an employee : " << first << " " << init << ". " << last << endl;
}