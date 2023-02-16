/****************************************************
 * A program which creates a table with 2-d vector  *
****************************************************/
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // create vector of vector(2-d vector)
    const int ROWS = 10;
    const int COLS = 10;
    vector<vector<int>> table(ROWS, vector<int>(COLS));
    // setting the values of 2-d vector
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            table[i][j] = (i + 1) * (j + 1);
        }
    }
    // extract the value to print
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << setw(4) << table[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}