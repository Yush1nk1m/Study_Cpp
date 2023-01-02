/*********************************************************
 * A program which prints '*' symbol in a fixed pattern  *
 * with a nested loop statement                          *
*********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    int rows;       // the number of row
    int cols;       // the number of col
    // receive input
    cout << "Enter the number of row : ";
    cin >> rows;
    cout << "Enter the number of column : ";
    cin >> cols;
    // print
    for (int count1 = 1; count1 <= rows; count1++)
    {
        for (int count2 = 1; count2 <= cols; count2++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}