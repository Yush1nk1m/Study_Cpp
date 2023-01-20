/********************************************
 * A program which makes an array reversed  *
 * with a pointer                           *
********************************************/
#include <iostream>
using namespace std;

void reverse(int*, int);

int main()
{
    // array declaration, initialization
    int arr[5] = {10, 11, 12, 13, 14};
    // function call
    reverse(arr, 5);
    // make an array reversed and print it
    cout << "Print an array reversely : ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << "\t";
    }
    return 0;
}
/************************************************************
 * A function which receives a pointer for an array         *
 * and the size of the array as parameters and reverses it  *
************************************************************/
void reverse(int* pArr, int size)
{
    int i = 0;
    int j = size - 1;
    while (i < size / 2)
    {
        int temp = *(pArr + i);
        *(pArr + i) = *(pArr + j);
        *(pArr + j) = temp;
        i++;
        j--;
    }
}