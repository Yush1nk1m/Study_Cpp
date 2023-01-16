#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void decDiagonal(const int arr[6][6], int diagonal[6]);
void incDiagonal(const int arr[6][6], int diagonal[6]);

int main()
{
    srand(time(0));
    int arr[6][6], diagonal1[6], diagonal2[6];

    cout << "Original table" << endl;
    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 6; c++)
        {
            arr[r][c] = rand() % 100 + 100;
            cout << setw(4) << left << arr[r][c];
        }
        cout << endl;
    }
    cout << endl;

    decDiagonal(arr, diagonal1);
    incDiagonal(arr, diagonal2);

    cout << "Decreasing diagonal elements : ";
    for (int i = 0; i < 6; i++)
    {
        cout << setw(4) << left << diagonal1[i];
    }
    cout << endl;

    cout << "Increasing diagonal elements : ";
    for (int i = 0; i < 6; i++)
    {
        cout << setw(4) << left << diagonal2[i];
    }
    cout << endl;

    return 0;
}

void decDiagonal(const int arr[6][6], int diagonal[])
{
    for (int i = 0; i < 6; i++)
    {
        diagonal[i] = arr[i][i];
    }
}

void incDiagonal(const int arr[6][6], int diagonal[])
{
    for (int i = 0; i < 6; i++)
    {
        diagonal[i] = arr[5 - i][i];
    }
}