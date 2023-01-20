#include "04.h"

Array::Array(int capacity)
: capacity(capacity)
{
    arr = new int[capacity];
    size = 0;
}

Array::~Array()
{
    delete[] arr;
}

void Array::insert(int data)
{
    if (size < capacity)
    {
        arr[size++] = data;
    }
    else
    {
        cout << "Array is full. Unable to insert a data." << endl;
        assert(true);
    }
}

void Array::print() const
{
    cout << "The elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}