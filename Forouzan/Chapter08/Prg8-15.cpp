/************************************************************
 * A program which prints 1-d array that is linearized from *
 * 2-d array(row-direction, column-direction)               *
************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/********************************************************************
 * rowTransform function linearizes a 2-d array in row-direction    *
 * to prevent the first argument is changed, attach const qualifier *
********************************************************************/
void rowTransform(const int originArray[][4], int rowSize, int rowArray[])
{
    int i = 0, j = 0;
    rowSize *= 4;
    for (int k = 0; k < rowSize; k++)
    {
        rowArray[k] = originArray[i][j];
        j++;
        if (j > 3)
        {
            i++;
            j = 0;
        }
    }
}
/********************************************************************
 * colTransform function linearizes a 2-d array in column-direction *
 * to prevent the first argument is changed, attach const qualifier *
********************************************************************/
void colTransform(const int originArray[][4], int rowSize, int colArray[])
{
    int i = 0, j = 0;
    for (int k = 0; k < rowSize * 4; k++)
    {
        colArray[k] = originArray[i][j];
        i++;
        if (i > rowSize - 1)
        {
            j++;
            i = 0;
        }
    }
}
/****************************************************************
 * print 2-d array after receiving it as an argument            *
 * to prevent the argument is changed, attach const qualifier   *
****************************************************************/
void printTwoDimensional(const int twoDimensional[][4], int rowSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << setw(4) << twoDimensional[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
/****************************************************************
 * print 1-d array after receiving it as an argument            *
 * to prevent the argument is changed, attach const qualifier   *
****************************************************************/
void printOneDimensional(const int oneDimensional[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << oneDimensional[i];
    }
    cout << endl;
}

int main()
{
    // array declaration and initialization
    int originArray[2][4] = {{0, 1, 2, 3}, {10, 11, 12, 13}};
    int rowArray[8];
    int colArray[8];
    // call 2 functions to transform arrays
    rowTransform(originArray, 2, rowArray);
    colTransform(originArray, 2, colArray);
    // print 2-d array
    cout << "Origin Array" << endl;
    printTwoDimensional(originArray, 2);
    // print the result of row transformation
    cout << "The result of the row transformation : ";
    printOneDimensional(rowArray, 8);
    // print the result of column transformation
    cout << "The result fo the column transformation : ";
    printOneDimensional(colArray, 8);
    return 0;
}