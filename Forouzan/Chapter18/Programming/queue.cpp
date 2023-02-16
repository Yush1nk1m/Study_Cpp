/****************************************************************************************
 * An implementation file for Queue class which utilizes member functions of List class *
****************************************************************************************/
#ifndef QUEUE_CPP
#define QUEUE_CPP
#include "queue.h"

// push member function
template<typename T>
void Queue<T>::push(const T& data)
{
    list.insert(list.size(), data);
}
// pop member function
template<typename T>
void Queue<T>::pop()
{
    list.erase(0);
}
// front member function
template<typename T>
T& Queue<T>::front() const
{
    return list.get(0);
}
// back member function
template<typename T>
T& Queue<T>::back() const
{
    return list.get(list.size() - 1);
}
// size member function
template<typename T>
int Queue<T>::size() const
{
    return list.size();
}
// print member function
template<typename T>
void Queue<T>::print() const
{
    list.print();
}
#endif