/********************************************************************
 * A program which processes the error state with the return value  *
********************************************************************/
#include <iostream>
using namespace std;

// function declaration
int quotient(int first, int second);

int main()
{
    int num1, num2, result;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an integer : ";
        cin >> num1;
        cout << "Enter the another integer : ";
        cin >> num2;
        result = quotient(num1, num2);
        if (result == -1)
        {
            cout << "Error : cannot divide by 0." << endl;
        }
        else
        {
            cout << "result = " << result << endl;
        }
    }
    return 0;
}

// function definition
int quotient(int first, int second)
{
    if (second == 0)
    {
        return -1;
    }
    else
    {
        return (first / second);
    }
}