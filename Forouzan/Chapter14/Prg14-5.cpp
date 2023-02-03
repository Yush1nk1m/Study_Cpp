/****************************************************************
 * A program which processes the exception with try-catch block *
****************************************************************/
#include <iostream>
using namespace std;

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
            if (num2 == 0)
            {
                throw 0;        // throw int type error
            }
            result = num1 / num2;
            cout << "result = " << result << endl;
        }
        catch (int x)
        {
            cout << "Cannot divide by 0." << endl;
        }
    }
    return 0;
}