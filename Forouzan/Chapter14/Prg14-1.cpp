/************************************************
 * A program which stops when it divides by 0   *
************************************************/
#include <iostream>
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
        result = num1 / num2;       // An expression that is able to raise an exception
        cout << "result = " << result << endl;
    }
    return 0;
}