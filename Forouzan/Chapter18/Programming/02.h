#ifndef STACK_H
#define STACK_H
#include "list.cpp"

template<typename T>
class Stack
{
    private:
        List<T>* list;
    public:
        Stack();
        ~Stack();
        void push(const T& data);
        void pop();
        T& top() const;
        int size() const;
};
#endif