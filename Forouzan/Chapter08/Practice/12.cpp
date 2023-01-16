#include <iostream>
using namespace std;

void insertion(int arr[], int& size, const int index, const int data)
{
    if (index < 0 || index > size)
    {
        cout << "Invalid index." << endl;
        return;
    }
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = data;
    size++;
    return;
}