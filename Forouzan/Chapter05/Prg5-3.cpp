/****************************************************************************
 * A program which prints number from 0 to n - 1 with while loop statement  *
****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    int n, count;
    // receive input of variable 'n'
    cout << "Enter an integer to print : ";
    cin >> n;
    // print integers
    count = 0;
    while (count < n)
    {
        cout << count << endl;
        count++;
    }
    return 0;
}