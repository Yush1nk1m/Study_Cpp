/********************************************************
 * A program which creates a few Matrix class objects   *
 * and does tests for operation                         *
********************************************************/
#include "matrix.h"

int main()
{
    // matrix1 instantiation
    cout << "matrix1" << endl;
    Matrix matrix1(3, 4);
    matrix1.setup();
    matrix1.print();
    // matrix2 instantiation
    cout << "matrix2" << endl;
    Matrix matrix2(3, 4);
    matrix2.setup();
    matrix2.print();
    // matrix3 instantiation
    cout << "matrix3" << endl;
    Matrix matrix3(4, 2);
    matrix3.setup();
    matrix3.print();
    // find out matrix1 + matrix2 and print the result
    cout << "The result of matrix1 + matrix2" << endl;
    Matrix addResult(3, 4);
    matrix1.add(matrix2, addResult);
    addResult.print();
    // find out matrix1 - matrix2 and print the result
    cout << "The result of matrix1 - matrix2" << endl;
    Matrix subResult(3, 4);
    matrix1.subtract(matrix2, subResult);
    subResult.print();
    // find out matrix1 * matrix3 and print the result
    cout << "The result of matrix1 * matrix3" << endl;
    Matrix mulResult(3, 2);
    matrix1.multiply(matrix3, mulResult);
    mulResult.print();
    return 0;
}