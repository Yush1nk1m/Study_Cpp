/*****************************************
 * A program which uses math functions   *
 * defined in <cmath> header file        *
*****************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // use abs function
    cout << "abs(8) = " << abs(8) << endl;
    cout << "abs(-8) = " << abs(-8) << endl;
    // use floor, ceil function
    cout << "floor(12.78) = " << floor(12.78) << endl;
    cout << "ceil(12.78) = " << ceil(12.78) << endl;
    // use log, log10 function
    cout << "log(100) = " << log(100) << endl;
    cout << "log10(100) = " << log10(100) << endl;
    // use exp, pow function
    cout << "exp(5) = " << exp(5) << endl;
    cout << "pow(2, 3) = " << pow(2, 3) << endl;
    // use sqrt function
    cout << "sprt(100) = " << sqrt(100) << endl;
    return 0;
}