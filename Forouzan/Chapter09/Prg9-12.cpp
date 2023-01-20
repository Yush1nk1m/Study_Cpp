/********************************************************
 * A program which passes 2-d array as a parameter of   *
 * a function and prints it                             *
********************************************************/
#include <iostream>
using namespace std;

void print(int(*)[4], int);         // prototype

int main()
{
    int matrix[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {31, 32, 33, 34}};
    // call print function
    print(matrix, 3);
    return 0;
}
/********************************************************************
 * A function which receives a pointer for an array with 4 elements *
 * and the number of row of the array as parameters                 *
********************************************************************/
void print(int(*m)[4], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << m[i][j] << "   ";
        }
        cout << endl;
    }
}