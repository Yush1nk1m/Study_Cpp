/****************************************
 * An implementation file for SP class  *
****************************************/
#include "sp.h"

// constructor
SP::SP(int* ptr)
: ptr(ptr)
{
}
// destructor
SP::~SP()
{
    delete ptr;
}
// * operator overload
int& SP::operator*() const
{
    return (*ptr);
}
// -> operator overload
int* SP::operator->() const
{
    return ptr;
}