/********************************************************
 * A program which creates the donation list randomly   *
 * and separates by the amount with queues              *
********************************************************/
#include "queue.cpp"
#include <cstdlib>
#include <ctime>

int main()
{
    // instantiate queues and declare variables
    Queue<int> queue1, queue2, queue3, queue4, queue5;
    int num;
    int donation;
    // randomly generate and separate donation list
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
    // separated result output
    cout << "Donation amount in range $0~9 : " << endl;
    queue1.print();
    cout << "Donation amount in range $10~19 : " << endl;
    queue2.print();
    cout << "Donation amount in range $20~29 : " << endl;
    queue3.print();
    cout << "Donation amount in range $30~39 : " << endl;
    queue4.print();
    cout << "Donation amount in range $40~49 : " << endl;
    queue5.print();
    cout << endl;
    return 0;
}