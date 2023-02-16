/****************************************************************************
 * An interface file for BinarySearchTree class                             *
 * implementing insert, erase, search, traversal, and etc. with recurrence  *
****************************************************************************/
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include <iostream>
#include <cassert>
using namespace std;

// Node structure definition
template<typename T>
struct Node
{
    T data;
    Node<T>* left;
    Node<T>* right;
};
// BinarySearchTree class definition
template<typename T>
class BinarySearchTree
{
    private:
        Node<T>* root;
        int count;
        Node<T>* makeNode(const T& value);
        void destroy(Node<T>* ptr);         // helper function
        void insert(const T& value, Node<T>*& ptr);     // helper function
        void inorder(Node<T>* ptr) const;       // helper function
        void preorder(Node<T>* ptr) const;      // helper function
        void postorder(Node<T>* ptr) const;     // helper function
        bool search(const T& value, Node<T>* ptr) const;    // helper function
    public:
        BinarySearchTree();
        ~BinarySearchTree();
        void insert(const T& value);
        void erase(const T& value);
        bool search(const T& value) const;
        void inorder() const;
        void preorder() const;
        void postorder() const;
        int size() const;
        bool empty() const;
};
#endif