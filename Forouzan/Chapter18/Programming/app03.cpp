/****************************************************************
 * An application file which does some tests for Queue class    *
****************************************************************/
#include "03.cpp"

int main()
{
    // Queue object instantiation
    Queue<string> queue;
    // push 4 nodes to the queue
    queue.push("Henry");
    queue.push("William");
    queue.push("Tara");
    queue.push("Richard");
    // check the status after pushing nodes
    cout << "Call front and back after pushing 4 nodes" << endl;
    cout << "front() : " << queue.front() << endl;
    cout << "back() : " << queue.back() << endl;
    cout << endl << endl;
    // pop 2 nodes from the queue
    queue.pop();
    queue.pop();
    // check the status after popping nodes
    cout << "Call front and back after popping 2 nodes" << endl;
    cout << "front() : " << queue.front() << endl;
    cout << "back() : " << queue.back() << endl;
    return 0;
}