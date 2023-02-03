/********************************************
 * An implementation file for Integer class *
********************************************/
#include "integer.h"

// constructor with function-try block
Integer::Integer(int value)
try : sp(new int)
{
    *sp = value;
}
catch (...)
{
    throw;
}
// destructor
Integer::~Integer()
{
}
// getter function
int Integer::getValue() const
{
    return (*sp);
}