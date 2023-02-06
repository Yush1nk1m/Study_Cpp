#ifndef QUEUE_CPP
#define QUEUE_CPP
#include "06.h"

template<typename T>
Queue<T>::Queue(int capacity)
: capacity(capacity + 1), front(0), rear(0)
{
    queue = new T[capacity];
}

template<typename T>
Queue<T>::~Queue()
{
    delete[] queue;
}

template<typename T>
void Queue<T>::enqueue(const T& element)
{
    try
    {
        if (rear == capacity)
        {
            throw Full();
        }
        queue[rear++] = element;
    }
    catch(Full ex)
    {
        cout << "Queue is full." << endl;
        assert(false);
    }
}

template<typename T>
T Queue<T>::dequeue()
{
    try
    {
        if (rear == front)
        {
            throw Empty();
        }
        else
        {
            return queue[front++];
        }
    }
    catch (Empty ex)
    {
        cout << "Queue is empty." << endl;
        assert(false);
    }
}
#endif