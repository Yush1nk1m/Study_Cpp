/********************************************
 * A program which shows how to access to   *
 * the array elements with a pointer        *
********************************************/
#include <iostream>
using namespace std;

int getSum(const int*, int);            // prototype

int main()
{
    // array declaration, initialization
    int arr[5] = {10, 11, 12, 13, 14};
    // function call
    cout << "The sum of element : " << getSum(arr, 5) << endl;
    return 0;
}
/************************************************************************
 * A function which receives the pointer for an array and the size of   *
 * the array as parameters, finds out the sum of element, and returns   *
************************************************************************/
int getSum(const int* p, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(p++);
    }
    return sum;
}