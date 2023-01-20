/********************************************************************
 * A program which creates variable size array in the heap memory   *
 * and accesses to the elements with a pointer                      *
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declare the size of an array and its pointer in the stack
    int size;
    int* pArray;
    // receive the size of the array from an user
    do
    {
        cout << "Enter the size of an array over 0 : ";
        cin >> size;
    } while (size <= 0);
    // create an array in the heap
    pArray = new int[size];
    // receive input in the array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << "th element's value : ";
        cin >> *(pArray + i);
    }
    // print the elements of the array
    cout << "Elements in the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(pArray + i) << "   ";
    }
    // delete the array from the heap
    delete[] pArray;
    return 0;
}