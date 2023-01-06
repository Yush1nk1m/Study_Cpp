/***************************************************************************
 * A program which prints the very right digit                             *
 * after it defines a function that receives a positive integer from user  *
***************************************************************************/
#include <iostream>
using namespace std;

/***************************************************************************
 * getData function has no parameter but a return value,                   *
 * additional action that receives input from user                         *
 * and return this input to main function                                  *
***************************************************************************/
int getData()
{
    int data;
    do
    {
        cout << "Enter a positive integer : ";
        cin >> data;
    } while (data <= 0);
    return data;
}

int main()
{
    int number = getData();     // function call without any argument
    cout << "The very right digit = " << number % 10 << endl;
    return 0;
}