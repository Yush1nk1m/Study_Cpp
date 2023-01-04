/**************************************************************************
 * A program which finds out the sum and the product of a list's numbers  *
 * when the size of the list is given                                     *
**************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // variable declaration
    int size;
    long double number;
    long double sum, product;
    // receive input and do data validation
    do
    {
        cout << "Enter the size of list as a non-negative integer : ";
        cin >> size;
    } while (size < 0);
    // initialization
    sum = 0;
    product = 1;
    // process
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter the next number : ";
        cin >> number;
        sum += number;
        product *= number;
    }
    // print
    cout << fixed << setprecision(2);
    cout << "The sum : " << sum << endl;
    cout << "The product : " << product << endl;
    return 0;
}