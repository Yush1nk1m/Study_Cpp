#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <cassert>
using namespace std;

class Full {};
class Empty {};

template<typename T>
class Queue
{
    private:
        T* queue;
        int front;
        int rear;
        int capacity;
    public:
        Queue(int capacity);
        ~Queue();
        void enqueue(const T& element);
        T dequeue();
};
#endif