/****************************************************
 * A program which terminates with an error message *
****************************************************/
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    int num1, num2, result;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an integer : ";
        cin >> num1;
        cout << "Enter the another integer : ";
        cin >> num2;
        if (num2 == 0)
        {
            cout << "The value of a divisor cannot be 0. Terminate the program." << endl;
            assert(false);
        }
        result = num1 / num2;
        cout << "result = " << result << endl;
    }
    return 0;
}