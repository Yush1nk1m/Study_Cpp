#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int arr1[5], arr2[5], arrTable[5][2];

    for (int i = 0; i < 5; i++)
    {
        arr1[i] = rand() % 100 + 100;
        arr2[i] = rand() % 100 + 100;
    }

    cout << "Original array 1 : ";
    for (int i = 0; i < 5; i++)
    {
        cout << setw(4) << left << arr1[i];
    }
    cout << endl;

    cout << "Original array 2 : ";
    for (int i = 0; i < 5; i++)
    {
        cout << setw(4) << left << arr2[i];
    }
    cout << endl << endl;

    for (int r = 0; r < 5; r++)
    {
        arrTable[r][0] = arr1[r];
        arrTable[r][1] = arr2[r];
    }

    cout << "Concatenated table" << endl;
    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            cout << setw(4) << left << arrTable[r][c];
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}