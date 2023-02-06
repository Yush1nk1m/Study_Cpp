#include "06.cpp"

int main()
{
    Queue<int> iQueue(5);
    for (int i = 0; i < 5; i++)
    {
        iQueue.enqueue(i);
    }
    cout << "iQueue : ";
    for (int i = 0; i < 5; i++)
    {
        cout << iQueue.dequeue() << " ";
    }
    cout << endl;

    Queue<string> sQueue(3);
    sQueue.enqueue("Hello");
    sQueue.enqueue(", ");
    sQueue.enqueue("World!");

    cout << "sQueue : ";
    for (int i = 0; i < 3; i++)
    {
        cout << sQueue.dequeue();
    }
    cout << endl;

    return 0;
}