/**********************************************************
 * A program which finds out factorial of a given number  *
 * with a list's internal numbers' product                *
**********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int n;
    unsigned long long factorial;
    // receive input
    do
    {
        cout << "Enter the size of a factorial : ";
        cin >> n;
    } while (n < 0);
    // initialization
    factorial = 1;
    // process
    for (int i = 1; i < n + 1; i++)
    {
        factorial *= i;
    }
    // print
    cout << n << "! = " << factorial;
    return 0;
}