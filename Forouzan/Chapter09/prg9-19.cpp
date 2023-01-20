/********************************************************************
 * An interface file for Matrix class                               *
 * it only declares the size of a matrix and its pointer as         *
 * private member, the others as public member                      *
 * constructor creates an array in the heap,                        *
 * destructor deletes the array in the heap                         *
 * setup member function initialzes a matrix with random values     *
 * in addition, addition, subtraction, multiplication, print        *
 * member functions are declared                                    *
********************************************************************/
#include <iostream>
#ifndef MATRIX_H
#define MATRIX_H
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
using namespace std;

// Matrix class definition
class Matrix
{
    private:
        int rowSize;
        int colSize;
        int** ptr;
    public:
        Matrix(int rowSize, int colSize);
        ~Matrix();
        void setup();
        void add(const Matrix& second, Matrix& result) const;
        void subtract(const Matrix& second, Matrix& result) const;
        void multiply(const Matrix& second, Matrix& result) const;
        void print() const;
};
#endif