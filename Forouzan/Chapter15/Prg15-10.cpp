/****************************************************
 * An implementation file for Fun template class    *
****************************************************/
#ifndef FUN_CPP
#define FUN_CPP
#include "fun.h"

// constructor
template<typename T>
Fun<T>::Fun(T data)
: data(data)
{
}
// destructor
template<typename T>
Fun<T>::~Fun()
{
}
// getter function
template<typename T>
T Fun<T>::get() const
{
    return data;
}
// setter function
template<typename T>
void Fun<T>::set(T data)
{
    this->data = data;
}
#endif