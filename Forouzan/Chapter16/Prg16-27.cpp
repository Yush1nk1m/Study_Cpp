/********************************************
 * An implementation file for length class  *
********************************************/
#include "length.h"

// constructor definition
length::length(int n)
: n(n)
{
}
// << operator overload
ostream& operator<<(ostream& stream, const length& len)
{
    stream.width(len.n);
    return stream;
}