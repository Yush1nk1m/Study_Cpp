/************************************************
 * An application file which reverses a string  *
 * not with recurrence but a stack              *
************************************************/
#include "stack.cpp"

int main()
{
    // instantiation a Stack object and 2 string objects
    Stack<char> stack;
    string origin;
    string reversed;
    // string input
    cout << "Enter a string to reverse : ";
    getline(cin, origin);
    // push each characters in the string to the stack
    for (int i = 0; i < origin.size(); i++)
    {
        stack.push(origin[i]);
    }
    // pop from the stack to reverse the string
    while (stack.size() > 0)
    {
        reversed.push_back(stack.top());
        stack.pop();
    }
    // output
    cout << "The origin string : " << origin << endl;
    cout << "The reversed string : " << reversed << endl;
    return 0;
}