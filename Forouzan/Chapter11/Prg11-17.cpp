/********************************************
 * An implementation file for Person class  *
********************************************/
#include "person3.h"

// constructor
Person::Person(long identity, Date birthDate)
: identity(identity), birthDate(birthDate)
{
    assert(111111111 <= identity && identity <= 999999999);
}
// destructor
Person::~Person()
{
}
// print function
void Person::print() const
{
    cout << "Identity number : " << identity << endl;
    cout << "Date of birth : ";
    birthDate.print();
    cout << endl << endl;
}