/**********************************************************
 * Print numbers from 0 to n - 1 with for loop statement  *
**********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    int n;
    // receive input of variable n
    cout << "Enter an integer to print : ";
    cin >> n;
    // loop statement
    for (int counter = 0; counter < n; counter++)
    {
        cout << counter << " ";
    }
    return 0;
}