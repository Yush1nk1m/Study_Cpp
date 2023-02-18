/********************************************************
 * A program which separates donation list with a queue *
********************************************************/
#include <queue>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// print function declaration
void print(queue<int> queue);

int main()
{
    // declare 5 queues and 2 variables
    queue<int> queue1, queue2, queue3, queue4, queue5;
    int num;
    int donation;
    // generate donation list randomly and separate
    srand(time(0));
    for (int i = 0; i < 50; i++)
    {
        num = rand();
        donation = num % (50 - 0 + 0) + 0;
        switch (donation / 10)
        {
            case 0: queue1.push(donation);
                    break;
            case 1: queue2.push(donation);
                    break;
            case 2: queue3.push(donation);
                    break;
            case 3: queue4.push(donation);
                    break;
            case 4: queue5.push(donation);
                    break;
        }
    }
    // print separated result
    cout << "Donation amount in range $00~09 : ";
    print(queue1);
    cout << "Donation amount in range $10~19 : ";
    print(queue2);
    cout << "Donation amount in range $20~29 : ";
    print(queue3);
    cout << "Donation amount in range $30~39 : ";
    print(queue4);
    cout << "Donation amount in range $40~49 : ";
    print(queue5);
    return 0;
}
// print function definition
void print(queue<int> queue)
{
    while (!queue.empty())
    {
        cout << queue.front() << " ";
        queue.pop();
    }
    cout << endl;
}