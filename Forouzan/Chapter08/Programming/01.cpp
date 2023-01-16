#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void print(const int arr[], const int size);

int main()
{
    srand(time(0));
    int arr[100];

    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 101 + 100;
    }
    print(arr, 100);
    
    return 0;
}

void print(const int arr[], const int size)
{
    for (int i = 1; i <= size; i++)
    {
        cout << setw(4) << left << arr[i - 1];
        if (i % 10 == 0)
        {
            cout << endl;
        }
    }
}