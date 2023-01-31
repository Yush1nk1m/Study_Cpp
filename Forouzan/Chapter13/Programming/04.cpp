#include "04.h"

Set::Set()
: size(0)
{
    set = new int[size];
}

Set::~Set()
{
    delete[] set;
}

const Set Set::set_union(const Set& second) const
{
    Set temp();
    for (int i = 0; i < size; i++)
    {
        ; /* implement it */
    }
}