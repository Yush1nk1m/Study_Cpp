/*****************************
 * A trigonometric function  *
*****************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // variable declaration
    const double PI = 3.141592653589793238462;
    double degree = PI / 4;
    // find out the value of sin, cos, tan of 45 degree
    cout << "sin(45) : " << sin(degree) << endl;
    cout << "cos(45) : " << cos(degree) << endl;
    cout << "tan(45) : " << tan(degree) << endl;
    return 0;
}