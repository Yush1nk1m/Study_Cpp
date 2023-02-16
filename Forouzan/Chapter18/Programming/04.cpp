/****************************************************************************
 * An application file which converts decimal number into binary number     *
****************************************************************************/
#include "stack.cpp"

int main()
{
    // Stack object instantiation
    Stack<char> stack;
    // create 2 string objects and 2 variables
    string converter("01");
    string binary;
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
        stack.push(converter[decimal % 2]);
        decimal /= 2;
    }
    // pop from the stack and combine the string
    while (stack.size() > 0)
    {
        binary.push_back(stack.top());
        stack.pop();
    }
    // binary output
    cout << "Converted binary number : " << binary << endl;
    return 0;
}