#include "05.h"

SortedArray::SortedArray(int capacity)
: capacity(capacity)
{
    arr = new int[capacity];
    size = 0;
}

SortedArray::~SortedArray()
{
    delete[] arr;
}

void SortedArray::insert(int data)
{
    if (size < capacity)
    {
        arr[size++] = data;
        for (int i = size - 1; (i > 0) && (arr[i - 1] > arr[i]); i--)
        {
            int temp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = temp;
        }
    }
    else
    {
        cout << "Array is full. Unable to insert a data." << endl;
        assert(true);
    }
}

void SortedArray::print() const
{
    cout << "The elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}