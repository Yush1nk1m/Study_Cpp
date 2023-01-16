#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int arr1[5], arr2[5], arrTable[2][5];

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
    cout << endl;

    for (int c = 0; c < 5; c++)
    {
        arrTable[0][c] = arr1[c];
        arrTable[1][c] = arr2[c];
    }

    cout << "Concatenated table" << endl;
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << setw(4) << left << arrTable[r][c];
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}