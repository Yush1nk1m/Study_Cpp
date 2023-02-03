/****************************************************************
 * A program which processes the exception with try-catch block *
****************************************************************/
#include "03.h"
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
                DivByZero dbz("Cannot divide by 0.");
                throw dbz;
            }
            result = num1 / num2;
            cout << "result = " << result << endl;
        }
        catch (DivByZero except)
        {
            cout << except.what() << endl;
        }
    }
    return 0;
}