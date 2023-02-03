/********************************************************************************
 * A program which prevents termination checking any possibility of the error   *
********************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter an integer : ";
        cin >> num1;
        cout << "Enter the another integer : ";
        cin >> num2;
        if (num2 == 0)
        {
            cout << "It is impossible to process with the current input." << endl;
        }
        else
        {
            result = num1 / num2;
            cout << "result = " << result << endl;
        }
    }
    return 0;
}