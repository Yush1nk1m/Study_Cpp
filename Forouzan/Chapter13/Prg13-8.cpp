/************************************************
 * An implementation file for Smallest class    *
************************************************/
#include "smallest.h"

// constructor
Smallest::Smallest()
{
    current = numeric_limits<int>::max();
}
// function call operator overload
int Smallest::operator()(int next)
{
    if (next < current)
    {
        current = next;
    }
    return current;
}