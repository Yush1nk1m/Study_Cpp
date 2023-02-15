/****************************************************
 * An interface file for Stack class implemented    *
 * by List class (Composition)                      *
****************************************************/
#ifndef STACK_H
#define STACK_H
#include "list.cpp"

// Stack class definition(include List class as a composition)
template<typename T>
class Stack
{
    private:
        List<T> list;
    public:
        void push(const T& data);
        void pop();
        T& top() const;
        int size() const;
};
#endif