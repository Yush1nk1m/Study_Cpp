#include <iostream>
using namespace std;

bool isEqual(const int arr1[], const int arr2[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}