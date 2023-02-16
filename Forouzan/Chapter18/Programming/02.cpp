#ifndef STACK_CPP
#define STACK_CPP
#include "02.h"

template<typename T>
Stack<T>::Stack()
{
    list = new List<T>;
}

template<typename T>
Stack<T>::~Stack()
{
    delete list;
}

// push member function
template<typename T>
void Stack<T>::push(const T& data)
{
    list->insert(0, data);
}
// pop member function
template<typename T>
void Stack<T>::pop()
{
    list->erase(0);
}
// top member function
template<typename T>
T& Stack<T>::top() const
{
    return list->get(0);
}
// size member function
template<typename T>
int Stack<T>::size() const
{
    return list->size();
}
#endif