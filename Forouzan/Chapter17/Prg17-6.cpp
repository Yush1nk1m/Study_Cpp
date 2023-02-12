/************************************************************
 * Quick sort algorithm which calls partition algorithm     *
 * recursively to sort an array                             *
************************************************************/
#include <iostream>
using namespace std;

// function declaration
void swap(int& x, int& y);
void print(int array[], int size);
int partition(int array[], int begin, int end);
void quickSort(int array[], int begin, int end);

int main()
{
    // not sorted array declaration
    int array[10] = {27, 22, 11, 94, 83, 14, 30, 19, 46, 33};
    // print the original array
    cout << "The original array : ";
    print(array, 10);
    // sort array with quick sort
    quickSort(array, 0, 9);
    // print the sorted array
    cout << "The sorted array : ";
    print(array, 10);
    return 0;
}

// swap function
void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
// a function which prints the array
void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
// partition function
int partition(int array[], int begin, int end)
{
    int p = begin;      // pivot initialization
    int i = begin;      // i initialization
    int j = end;        // j initialization

    while (i < j)
    {
        // move j to the left
        while (array[j] > array[p])
        {
            j--;
        }
        swap(array[j], array[p]);
        p = j;
        // move i to the right
        while (array[i] < array[p])
        {
            i++;
        }
        swap(array[i], array[p]);
        p = i;
    }
    return p;
}
// quick sort function
void quickSort(int array[], int begin, int end)
{
    if (begin >= end || begin < 0)
    {
        return;
    }
    int pivot = partition(array, begin, end);
    quickSort(array, begin, pivot - 1);
    quickSort(array, pivot + 1, end);
}