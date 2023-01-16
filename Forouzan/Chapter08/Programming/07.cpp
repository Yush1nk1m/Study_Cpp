#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int arr[20], odd[20], even[20];

    cout << "Original array : ";
    for (int i = 0; i < 20; i++)
    {
        arr[i] = rand() % 100 + 1;
        cout << setw(4) << left << arr[i];
    }
    cout << endl;

    int oddSize = 0, evenSize = 0;
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenSize++] = arr[i];
        }
        else
        {
            odd[oddSize++] = arr[i];
        }
    }

    cout << "Odd array : ";
    for (int i = 0; i < oddSize; i++)
    {
        cout << setw(4) << left << odd[i];
    }
    cout << endl;

    cout << "Even array : ";
    for (int i = 0; i < evenSize; i++)
    {
        cout << setw(4) << left << even[i];
    }
    cout << endl;

    return 0;
}