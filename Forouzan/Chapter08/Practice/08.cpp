#include <iostream>
using namespace std;

bool isAscending(const int arr[], const int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }
    return true;
}