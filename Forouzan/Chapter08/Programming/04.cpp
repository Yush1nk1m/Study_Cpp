#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void print(const int arr[], const int size);
void roundShift(int arr[], const int size);

int main()
{
    srand(time(0));
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    print(arr, 10);
    roundShift(arr, 10);
    print(arr, 10);

    return 0;
}

void print(const int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << left << arr[i];
    }
    cout << endl;
    return;
}

void roundShift(int arr[], const int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    return;
}