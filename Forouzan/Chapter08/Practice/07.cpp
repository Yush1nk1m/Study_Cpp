#include <iostream>
using namespace std;

void multiply2(const int arr1[], int arr2[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i] * 2;
    }
    return;
}