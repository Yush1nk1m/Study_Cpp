/***********************************************************************
 * A program which runs return statement when it finds a prime number  *
***********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    int num;
    // receive input doing data validation
    do
    {
        cout << "Enter a positive integer : ";
        cin >> num;
    } while (num <= 0);
    // check if it is 1
    if (num == 1)
    {
        cout << "1 is neither a prime number nor a compound number." << endl;
        return 0;
    }
    // check if it is a compound number
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is a compound number." << endl;
            cout << "It can be divided by " << i << "." << endl;
            return 0;
        }
    }
    // print result
    cout << num << " is a prime number." << endl;
    return 0;
}