#ifndef ARRAY_CPP
#define ARRAY_CPP
#include "05.h"

template<typename T>
Array<T>::Array(int capacity)
: capacity(capacity), size(0)
{
    ptr = new T[capacity];
}

template<typename T>
Array<T>::~Array()
{
    delete[] ptr;
}

template<typename T>
void Array<T>::add(const T& element)
{
    if (size < capacity)
    {
        ptr[size++] = element;
    }
    else
    {
        cout << "Array is full. Cannot add an element." << endl;
        assert(false);
    }
}

template<typename T>
void Array<T>::print() const
{
    cout << "Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
}
#endif