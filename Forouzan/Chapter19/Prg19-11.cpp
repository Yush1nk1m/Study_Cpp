/****************************************************************
 * Convert decimal number into hexadecimal number with a stack  *
****************************************************************/
#include <stack>
#include <iostream>
using namespace std;

int main()
{
    // stack instantiation
    stack<char> Stack;
    // declare 2 strings and a variable
    string converter("0123456789ABCDEF");
    string hexadecimal;
    int decimal;
    // receive input of decimal number
    do
    {
        cout << "Enter a positive integer : ";
        cin >> decimal;
    } while (decimal <= 0);
    // convert into hexadecimal number and push in the stack
    while (decimal != 0)
    {
        Stack.push(converter[decimal % 16]);
        decimal /= 16;
    }
    // pop from the stack and stick to the string
    while (!Stack.empty())
    {
        hexadecimal.push_back(Stack.top());
        Stack.pop();
    }
    cout << "The result of hexadecimal conversion = " << hexadecimal << endl;
    return 0;
}