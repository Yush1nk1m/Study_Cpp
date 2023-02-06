/****************************************************************
 * An interface file which defines smaller template function    *
****************************************************************/
#ifndef SMALLER_H
#define SMALLER_H
#include <iostream>
using namespace std;

template<typename T>
T smaller(const T& first, const T& second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}
#endif