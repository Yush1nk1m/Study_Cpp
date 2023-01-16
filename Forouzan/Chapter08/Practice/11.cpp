#include <iostream>
using namespace std;

void deletion(int arr[], int& size, const int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index." << endl;
        return;
    }
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    return;
}