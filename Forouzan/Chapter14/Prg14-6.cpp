/****************************************************************************************
 * A program which processes the exception thrown in a function with try-catch block    *
****************************************************************************************/
#include <iostream>
using namespace std;

int quotient(int first, int second);        // function declaration

int main()
{
    int num1, num2, result;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an integer : ";
        cin >> num1;
        cout << "Enter the another integer : ";
        cin >> num2;
        // try-catch block
        try
        {
            cout << "result = " << quotient(num1, num2) << endl;
        }
        catch (int exception)
        {
            cout << "Cannot divide by 0." << endl;
        }
    }
    return 0;
}

// function definition
int quotient(int first, int second)
{
    if (second == 0)
    {
        throw 0;
    }
    return (first / second);
}