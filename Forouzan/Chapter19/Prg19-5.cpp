/************************************************
 * A program which rotates elements with deque  *
************************************************/
#include <deque>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

// global print function
void print(deque<string> deq)
{
    for (int i = 0; i < deq.size(); i++)
    {
        cout << deq.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // create a deque and initialize with 5 elements
    deque<string> deq(5);
    string arr[5] = {"John", "Mary", "Rich", "Mark", "Tara"};
    for (int i = 0; i < 5; i++)
    {
        deq[i] = arr[i];
    }
    print(deq);
    // rotate clockwise
    deq.push_back(deq.front());
    deq.pop_front();
    print(deq);
    // rotate counterclockwise
    deq.push_front(deq.back());
    deq.pop_back();
    print(deq);
    return 0;
}