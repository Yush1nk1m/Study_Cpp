#ifndef DOUBLY_CPP
#define DOUBLY_CPP
#include "01.h"

template<typename T>
DoublyList<T>::DoublyList()
: begin(0), end(0), count(0)
{
}

template<typename T>
DoublyList<T>::~DoublyList()
{
    Node<T>* cur = begin;
    while (cur != 0)
    {
        Node<T>* del = cur;
        cur = cur->next;
        delete del;
    }
}

template<typename T>
void DoublyList<T>::insert(int pos, const T& value)
{
    if (pos < 0 || pos > count)
    {
        cout << "Cannot insert a node at the location out of range." << endl;
        return;
    }
    Node<T>* temp = makeNode(value);
    if (pos == 0)
    {
        if (!begin)
        {
            begin = temp;
            end = temp;
        }
        else
        {
            temp->next = begin;
            begin->before = temp;
            begin = temp;
        }
    }
    else if (pos == count)
    {
        temp->before = end;
        end->next = temp;
        end = temp;
    }
    else
    {
        Node<T>* cur = begin;
        for (int i = 1; i < pos; i++)
        {
            cur = cur->next;
        }
        temp->next = cur->next;
        temp->before = cur;
        cur->next = temp;
        temp->next->before = temp;
    }
    count++;
}

template<typename T>
void DoublyList<T>::erase(int pos)
{
    if (pos < 0 || pos > count - 1)
    {
        cout << "Cannot delete a node out of range." << endl;
        return;
    }
    
    if (pos == 0)
    {
        begin = begin->next;
        delete begin->before;
        begin->before = 0;
    }
    else if (pos == (count - 1))
    {
        end = end->before;
        delete end->next;
        end->next = 0;
    }
    else
    {
        Node<T>* cur = begin;
        for (int i = 0; i <= pos - 1; i++)
        {
            cur = cur->next;
        }
        cur->next->before = cur->before;
        cur->before->next = cur->next;
        delete cur;
    }
    count--;
}

template<typename T>
T& DoublyList<T>::get(int pos) const
{
    if (pos < 0 || pos > count - 1)
    {
        cout << "Cannot access to a node out of range." << endl;
        assert(false);
    }
    else if (pos == 0)
    {
        return begin->data;
    }
    else if (pos == count - 1)
    {
        return end->data;
    }
    else
    {
        Node<T>* cur = begin;
        for (int i = 0; i < pos; i++)
        {
            cur = cur->next;
        }
        return cur->data;
    }
}

template<typename T>
void DoublyList<T>::print() const
{
    if (count == 0)
    {
        cout << "The doubly list is empty." << endl;
        return;
    }
    Node<T>* cur = begin;
    while (cur != 0)
    {
        cout << cur->data << endl;
        cur = cur->next;
    }
}

template<typename T>
void DoublyList<T>::reversePrint() const
{
    if (count == 0)
    {
        cout << "The doubly list is empty." << endl;
        return;
    }
    Node<T>* cur = end;
    while (cur != 0)
    {
        cout << cur->data << endl;
        cur = cur->before;
    }
}

template<typename T>
int DoublyList<T>::size() const
{
    return count;
}

template<typename T>
Node<T>* DoublyList<T>::makeNode(const T& value)
{
    Node<T>* temp = new Node<T>;
    temp->data = value;
    temp->next = 0;
    temp->before = 0;
    return temp;
}
#endif