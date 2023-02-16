/****************************************************************************
 * An application file which converts decimal number into octal number      *
****************************************************************************/
#include "stack.cpp"

int main()
{
    // Stack object instantiation
    Stack<char> stack;
    // create 2 string objects and 2 variables
    string converter("01234567");
    string octal;
    int decimal;
    int index;
    // decimal input
    do
    {
        cout << "Enter a positive integer : ";
        cin >> decimal;
    } while (decimal <= 0);
    cout << "Received decimal number : " << decimal << endl;
    // convert into binary literal and push into the stack
    while (decimal != 0)
    {
        stack.push(converter[decimal % 8]);
        decimal /= 8;
    }
    // pop from the stack and combine the string
    while (stack.size() > 0)
    {
        octal.push_back(stack.top());
        stack.pop();
    }
    // octal output
    cout << "Converted octal number : " << octal << endl;
    return 0;
}