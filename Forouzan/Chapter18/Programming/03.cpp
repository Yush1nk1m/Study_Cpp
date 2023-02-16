#ifndef QUEUE_CPP
#define QUEUE_CPP
#include "03.h"

template<typename T>
Queue<T>::Queue()
{
    list = new List<T>;
}

template<typename T>
Queue<T>::~Queue()
{
    delete list;
}

template<typename T>
void Queue<T>::push(const T& data)
{
    list->insert(list->size(), data);
}

template<typename T>
void Queue<T>::pop()
{
    list->erase(0);
}

template<typename T>
T& Queue<T>::front() const
{
    return list->get(0);
}

template<typename T>
T& Queue<T>::back() const
{
    return list->get(list->size() - 1);
}

template<typename T>
int Queue<T>::size() const
{
    return list->size();
}

template<typename T>
void Queue<T>::print() const
{
    list->print();
}
#endif