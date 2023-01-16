#include <iostream>
using namespace std;

void swap(int arr[], const int size, const int index1, const int index2)
{
    if (index1 < 0 || index1 >= size)
    {
        cout << "Invalid index." << endl;
        return;
    }
    if (index2 < 0 || index2 >= size)
    {
        cout << "Invalid index." << endl;
        return;
    }
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
    return;
}