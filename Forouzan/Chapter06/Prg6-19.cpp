/************************************************
 * A program which does overloading             *
 * three functions with different signitures    *
************************************************/
#include <iostream>
using namespace std;

// function declaration
int max(int num1, int num2);
int max(int num1, int num2, int num3);
int max(int num1, int num2, int num3, int num4);

int main()
{
    // call overloaded max functions
    cout << "maximum(5, 7) = " << max(5, 7) << endl;
    cout << "maximum(7, 9, 8) = " << max(7, 9, 8) << endl;
    cout << "maximum(14, 3, 12, 11) = " << max(14, 3, 12, 11) << endl;
    return 0;
}

/********************************************************
 * Definition of two-parameter max function             *
 * it returns the larger value among two numbers        *
********************************************************/
int max(int num1, int num2)
{
    int larger;     // local variable
    if (num1 >= num2)
    {
        larger = num1;
    }
    else
    {
        larger = num2;
    }
    return larger;
}
/********************************************************************************************
 * Definition of three-parameter max function                                               *
 * it uses pre-defined max function to find out the larger value between num1, num2         *
 * and returns the larger value between two-parameter function's returned value and num3    *
********************************************************************************************/
int max(int num1, int num2, int num3)
{
    return max(max(num1, num2), num3);
}
/********************************************************************************************
 * Definition of four-parameter max function                                                *
 * it uses pre-defined max function to find out the larger value among num1, num2, and num3 *
 * and returns the larger value between three-parameter function's returned value and num4  *
********************************************************************************************/
int max(int num1, int num2, int num3, int num4)
{
    return max(max(num1, num2, num3), num4);
}