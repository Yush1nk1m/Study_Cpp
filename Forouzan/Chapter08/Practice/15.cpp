#include <iostream>
using namespace std;

void printColumn(const int table[][3], const int row, const int c)
{
    if (c < 0 || c > 2 || row < 0)
    {
        cout << "Invalid data." << endl;
        return;
    }
    
    for (int r = 0; r < row; r++)
    {
        cout << table[r][c] << endl;
    }
    return;
}