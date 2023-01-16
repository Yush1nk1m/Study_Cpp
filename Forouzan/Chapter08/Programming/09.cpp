#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void concatenate(const int arr1[], const int arr2[], int resArr[], const int size);

int main()
{
    srand(time(0));
    int arr1[5], arr2[5], arr3[10];

    for (int i = 0; i < 5; i++)
    {
        arr1[i] = rand() % 100 + 100;
        arr2[i] = rand() % 100 + 100;
    }

    cout << "Original array1 : ";
    for (int i = 0; i < 5; i++)
    {
        cout << setw(4) << left << arr1[i];
    }
    cout << endl;

    cout << "Original array2 : ";
    for (int i = 0; i < 5; i++)
    {
        cout << setw(4) << left << arr2[i];
    }

    concatenate(arr1, arr2, arr3, 10);

    cout << "Concatenated array : ";
    for (int i = 0; i < 10; i++)
    {
        cout << setw(4) << left << arr3[i];
    }
    cout << endl;

    return 0;
}

void concatenate(const int arr1[], const int arr2[], int resArr[], const int size)
{
    for (int i = 0; i < 5; i++)
    {
        resArr[2 * i] = arr1[i];
        resArr[2 * i + 1] = arr2[i];
    }
    return;
}