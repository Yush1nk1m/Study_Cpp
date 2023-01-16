#include <iostream>
#include <limits>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int arr[10];
    int minIndex = 0;
    int maxIndex = 0;

    cout << "Origin array : ";
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 + 1;
        cout << setw(4) << left << arr[i];
    }
    cout << endl;

    for (int i = 1; i < 10; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    if (maxIndex < minIndex)
    {
        minIndex--;
    }

    for (int i = maxIndex; i < 9; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = minIndex; i < 8; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << "Modified array : ";
    for (int i = 0; i < 8; i++)
    {
        cout << setw(4) << left << arr[i];
    }
    cout << endl;

    return 0;
}