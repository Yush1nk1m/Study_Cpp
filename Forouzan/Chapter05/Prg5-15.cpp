/*******************************************************
 * A program which prints numbers in a fixed pattern   *
 * with a nested loop statement                        *
*******************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    int rows;       // the number of row
    int cols;       // the number of column
    // receive input
    cout << "Enter the number of row : ";
    cin >> rows;
    cout << "Enter the number of column : ";
    cin >> cols;
    // nested loop statement
    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= i + cols - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}