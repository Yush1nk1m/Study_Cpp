/********************************************************
 * A program which finds the specific value in an array *
 * with recursive binary search                         *
********************************************************/
#include <iostream>
using namespace std;

// binarySearch function declaration(recursive + non-recursive)
int binarySearch(const int arr[], int size, int value);
int binarySearch(const int arr[], int low, int high, int value);
// declare an array of search target
const int SIZE = 10;
int array[SIZE] = {11, 14, 19, 22, 27, 30, 33, 46, 63, 94};

int main()
{
    // receive input of searching value
    int value;
    cout << "Enter the value to search : ";
    cin >> value;
    // non-recursive function binarySearch call
    int index = binarySearch(array, SIZE, value);
    if (index == -1)
    {
        cout << "Cannot find the value in the array." << endl;
    }
    else
    {
        cout << "The value has found : " << index << endl;
    }
    return 0;
}
// non-recursive binarySearch function definition
int binarySearch(const int arr[], int size, int value)
{
    int low = 0;
    int high = size - 1;
    return binarySearch(arr, low, high, value);
}
// recursive binarySearch function definition
int binarySearch(const int arr[], int low, int high, int value)
{
    int mid = (low + high) / 2;
    if (low > high)
    {
        return -1;
    }
    else if (value == arr[mid])
    {
        return mid;
    }
    else if (value < arr[mid])
    {
        return binarySearch(arr, low, mid - 1, value);
    }
    else
    {
        return binarySearch(arr, mid + 1, high, value);
    }
}