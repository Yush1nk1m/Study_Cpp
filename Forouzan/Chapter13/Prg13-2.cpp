/************************************************
 * An implementation file for SmartPtr class    *
************************************************/
#include "smartptr.h"

// constructor
SmartPtr::SmartPtr(Fraction* p)
: ptr(p)
{
}
// destructor
SmartPtr::~SmartPtr()
{
    delete ptr;
}
// indirection operator overload
Fraction& SmartPtr::operator*() const
{
    return *ptr;
}
// selection operator overload
Fraction* SmartPtr::operator->() const
{
    return ptr;
}