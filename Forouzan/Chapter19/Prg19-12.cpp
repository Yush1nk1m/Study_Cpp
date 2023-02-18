/********************************************************************************************
 * A program which verifies if the pair of parenthesis of an expression is correct or not   *
********************************************************************************************/
#include <stack>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // declare stack, string, bool
    stack<char> Stack;
    string expression;
    bool paired = true;
    // receive input, push to the stack, pop from the stack
    cout << "Enter an expression : ";
    getline(cin, expression);
    int i = 0;
    while (i < expression.size() && paired)
    {
        char next = expression[i];
        if (next == '(')
        {
            Stack.push(next);
        }
        else if (next == ')')
        {
            if (Stack.empty())
            {
                paired = false;     // if the stack is empty, parenthesis is not paired
            }
            else
            {
                Stack.pop();
            }
        }
        i++;
    }
    // if the stack is not empty, parenthesis is not paired
    if (!Stack.empty())
    {
        paired = false;
    }
    // print result
    if (paired)
    {
        cout << "It is normal expression with paired parenthesis." << endl;
    }
    else
    {
        cout << "Parenthesis is not paired." << endl;
    }
    return 0;
}