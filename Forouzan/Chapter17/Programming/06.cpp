#include <iostream>
#include <limits>
using namespace std;

int smallest(int array[], int n);
int smallest(int array[], int n, int index, int currentMin);

int smallest(int array[], int n)
{
    if (n <= 0)
    {
        return -1;
    }
    else
    {
        return smallest(array, n, 1, array[0]);
    }
}

int smallest(int array[], int n, int index, int currentMin)
{
    if (index > n)
    {
        return currentMin;
    }
    else
    {
        if (currentMin < array[index])
        {
            return smallest(array, n, index + 1, currentMin);
        }
        else
        {
            return smallest(array, n, index + 1, array[index]);
        }
    }
}

int main()
{
    int arr1[] = {1, 3, 2, 4, 5, -1, 7, 8, 9, 0};
    int arr2[] = {10, 3, 7, 0, -4, 8, 2, 9, 5, 12};
    int arr3[] = {11, 9, 8, 7, 3, 2, 1, 0, -1, -2};

    cout << smallest(arr1, 10) << endl;
    cout << smallest(arr2, 10) << endl;
    cout << smallest(arr3, 10) << endl;

    return 0;
}