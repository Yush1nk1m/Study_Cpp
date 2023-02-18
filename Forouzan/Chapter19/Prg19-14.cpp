/****************************************
 * A program which uses priority_queue  *
****************************************/
#include <queue>
#include <iostream>
using namespace std;

int main()
{
    // priority_queue object creation
    priority_queue<int> line;
    // push elements
    line.push(4);
    line.push(7);
    line.push(2);
    line.push(6);
    line.push(7);
    line.push(8);
    line.push(2);
    // print elements by priority
    while (!line.empty())
    {
        cout << line.top() << " ";
        line.pop();
    }
    return 0;
}