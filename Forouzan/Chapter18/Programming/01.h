#ifndef DOUBLY_H
#define DOUBLY_H
#include <iostream>
#include <cassert>
using namespace std;

template<typename T>
struct Node
{
    T data;
    Node<T>* before;
    Node<T>* next;
};

template<typename T>
class DoublyList
{
    private:
        Node<T>* begin;
        Node<T>* end;
        int count;
        Node<T>* makeNode(const T& value);
    public:
        DoublyList();
        ~DoublyList();
        void insert(int pos, const T& value);
        void erase(int pos);
        T& get(int pos) const;
        void print() const;
        void reversePrint() const;
        int size() const;
};
#endif