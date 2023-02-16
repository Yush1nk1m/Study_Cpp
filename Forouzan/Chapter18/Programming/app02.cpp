/********************************************************
 * An application which does some tests for Stack class *
********************************************************/
#include "02.cpp"

int main()
{
    // instantiation of Stack object
    Stack<string> stack;
    // add 4 nodes to the stack
    stack.push("Henry");
    stack.push("William");
    stack.push("Tara");
    stack.push("Richard");
    // check the size of the stack
    cout << "The size of the stack : " << stack.size() << endl;
    // call top member function to check the top node and call pop function to delete it
    while (stack.size() > 0)
    {
        cout << "stack.top() : " << stack.top() << endl;
        stack.pop();
    }
    // re-check the size of the stack
    cout << "The size of the stack : " << stack.size() << endl;
    return 0;
}