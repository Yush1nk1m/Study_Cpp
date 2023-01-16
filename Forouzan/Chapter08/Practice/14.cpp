#include <iostream>
#include <iomanip>
using namespace std;

void printTwoDimensional(const int table[][3], const int row)
{
    if (row <= 0)
    {
        cout << "Invalid data." << endl;
        return;
    }

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << setw(3) << left << table[r][c];
        }
        cout << endl;
    }
    cout << endl;
    return;
}