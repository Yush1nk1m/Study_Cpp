#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int** arr = new int*[3];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = new int[5];
    }

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << "Enter the value of [" << r << "," << c << "] : ";
            cin >> arr[r][c];
        }
    }

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << setw(3) << left << arr[r][c];
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}