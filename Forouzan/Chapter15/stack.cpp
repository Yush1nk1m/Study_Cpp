/****************************************************
 * An implementation file for Stack template class  *
****************************************************/
#ifndef STACK_CPP
#define STACK_CPP
#include "stack.h"

// constructor
template<typename T>
Stack<T>::Stack(int capacity)
: capacity(capacity), size(0)
{
    ptr = new T[capacity];
}
// destructor
template<typename T>
Stack<T>::~Stack()
{
    delete[] ptr;
}
// push function
template<typename T>
void Stack<T>::push(const T& element)
{
    if (size < capacity)
    {
        ptr[size] = element;
        size++;
    }
    else
    {
        cout << "Stack is full. Cannot push." << endl;
        assert(false);
    }
}
// pop function
template<typename T>
T Stack<T>::pop()
{
    if (size > 0)
    {
        T temp = ptr[size - 1];
        size--;
        return temp;
    }
    else
    {
        cout << "Stack is empty. Cannot pop." << endl;
        assert(false);
    }
}
#endif