/*******************************************************************
 * A program which finds out the solution of a quadratic equation  *
*******************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // variable declaration
    int a, b, c;
    double term;
    // receive input of coefficient
    cout << "Enter the value of a coefficient 'a' : ";
    cin >> a;
    cout << "Enter the value of a coefficient 'b' : ";
    cin >> b;
    cout << "Enter the value of a coefficient 'c' : ";
    cin >> c;
    // calculate a discriminant(b^2 - 4ac)
    term = pow(b, 2) - (4 * a * c);
    if (term < 0)
    {
        cout << "There's no solution of equation" << endl;
    }
    else if (term == 0)
    {
        cout << "Two solutions are the same." << endl;
        cout << "x1 = x2 = " << -b / (2 * a) << endl;
    }
    else
    {
        cout << "There are two different solutions." << endl;
        cout << "x1 = " << (-b + sqrt(term)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(term)) / (2 * a) << endl;
    }
    return 0;
}