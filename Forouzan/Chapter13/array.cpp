/********************************************
 * An implementation file for Array class   *
********************************************/
#include "array.h"

// constructor(allocate in the heap memory)
Array::Array(int size)
: size(size)
{
    ptr = new double[size];
}
// destructor(free the heap memory)
Array::~Array()
{
    delete[] ptr;
}
// indexing getter
double& Array::operator[](int index) const
{
    if (index < 0 || index >= size)
    {
        cout << "It is an invalid index. Terminate the program." << endl;
        assert(false);
    }
    return ptr[index];
}
// indexing setter
double& Array::operator[](int index)
{
    if (index < 0 || index >= size)
    {
        cout <<  "It is an invalid index. Terminate the program." << endl;
        assert(false);
    }
    return ptr[index];
}