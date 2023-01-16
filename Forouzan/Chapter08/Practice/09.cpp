#include <iostream>
using namespace std;

bool search(const int arr[], const int size, const int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return true;
        }
    }
    return false;
}