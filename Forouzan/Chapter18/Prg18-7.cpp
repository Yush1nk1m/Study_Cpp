/****************************************************************************
 * An application file which converts decimal number to hexadecimal number  *
****************************************************************************/
#include "stack.cpp"

int main()
{
    // Stack object instantiation
    Stack<char> stack;
    // create 2 string objects and 2 variables
    string converter("0123456789ABCDEF");
    string hexadecimal;
    int decimal;
    int index;
    // decimal input
    do
    {
        cout << "Enter a positive integer : ";
        cin >> decimal;
    } while (decimal <= 0);
    cout << "Received decimal number : " << decimal << endl;
    // convert into hexadecimal literal and push into the stack
    while (decimal != 0)
    {
        stack.push(converter[decimal % 16]);
        decimal /= 16;
    }
    // pop from the stack and combine the string
    while (stack.size() > 0)
    {
        hexadecimal.push_back(stack.top());
        stack.pop();
    }
    // hexadecimal output
    cout << "Converted hexadecimal number : " << hexadecimal << endl;
    return 0;
}