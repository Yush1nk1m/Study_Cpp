/************************************************
 * A program which uses default parameters      *
************************************************/
#include <iostream>
using namespace std;

// function declaration : the second parameter's default value is 40
double calcEarnings(double rate, double hours = 40);

int main()
{
    // the first function call is using the default parameter
    cout << "The rate of staff 1 : " << calcEarnings(22.0) << endl;
    cout << "The rate of staff 2 : " << calcEarnings(12.50, 18) << endl;
    return 0;
}

/****************************************************************************
 * in the definition of the function, the default parameter is not entered  *
 * because it was already used in the declaration of the function           *
****************************************************************************/
double calcEarnings(double rate, double hours)
{
    double pay;
    pay = hours * rate;
    return pay;
}