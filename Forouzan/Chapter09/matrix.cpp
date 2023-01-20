/********************************************************
 * An implementation file which defines every function  *
 * declared in the interface file                       *
 * it implements previously mentioned operations        *
********************************************************/
#include "matrix.h"

// constructor : allocates dynamic memory in the heap
Matrix::Matrix(int r, int c)
: rowSize(r), colSize(c)
{
    ptr = new int*[rowSize];
    for (int i = 0; i < rowSize; i++)
    {
        ptr[i] = new int[colSize];
    }
}
// destructor : frees dynamic memory in the heap
Matrix::~Matrix()
{
    for (int i = 0; i < rowSize; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;
}
// a function which initializes the elements of a matrix randomly
void Matrix::setup()
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            ptr[i][j] = rand() % 5 + 1;
        }
    }
}
// a function which adds two matrices
void Matrix::add(const Matrix& second, Matrix& result) const
{
    assert(second.rowSize == rowSize && second.colSize == colSize);
    assert(result.rowSize == rowSize && result.colSize == colSize);

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            result.ptr[i][j] = ptr[i][j] + second.ptr[i][j];
        }
    }
}
// a function which subtracts two matrices
void Matrix::subtract(const Matrix& second, Matrix& result) const
{
    assert(second.rowSize == rowSize && second.colSize == colSize);
    assert(result.rowSize == rowSize && result.colSize == colSize);

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            result.ptr[i][j] = ptr[i][j] - second.ptr[i][j];
        }
    }
}
// a function which multiplies two matrices
void Matrix::multiply(const Matrix& second, Matrix& result) const
{
    assert(colSize == second.rowSize);
    assert(result.rowSize == rowSize);
    assert(result.colSize == second.colSize);

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < second.colSize; j++)
        {
            result.ptr[i][j] = 0;
            for (int k = 0; k < colSize; k++)
            {
                result.ptr[i][j] += ptr[i][k] * second.ptr[k][j];
            }
        }
    }
}
// a function which prints the elements of a matrix
void Matrix::print() const
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << setw(5) << ptr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}