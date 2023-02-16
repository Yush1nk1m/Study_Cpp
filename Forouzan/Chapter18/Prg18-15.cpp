/************************************************************
 * An implementation file which defines member functions    *
 * declared in the interface file                           *
************************************************************/
#ifndef BINARYSEARCHTREE_CPP
#define BINARYSEARCHTREE_CPP
#include "binarysearchtree.h"

// constructor
template<typename T>
BinarySearchTree<T>::BinarySearchTree()
: root(0), count(0)
{
}
// destructor
template<typename T>
BinarySearchTree<T>::~BinarySearchTree()
{
    destroy(root);
}
// insert member function
template<typename T>
void BinarySearchTree<T>::insert(const T& value)
{
    insert(value, root);
    count++;
}
// search member function
template<typename T>
bool BinarySearchTree<T>::search(const T& value) const
{
    return search(value, root);
}
// pre-order traversal
template<typename T>
void BinarySearchTree<T>::preorder() const
{
    preorder(root);
}
// in-order traversal
template<typename T>
void BinarySearchTree<T>::inorder() const
{
    inorder(root);
}
// post-order traversal
template<typename T>
void BinarySearchTree<T>::postorder() const
{
    postorder(root);
}
// size member function
template<typename T>
int BinarySearchTree<T>::size() const
{
    return count;
}
// empty member function
template<typename T>
bool BinarySearchTree<T>::empty() const
{
    return (count == 0);
}
// helper function used in the destructor
template<typename T>
void BinarySearchTree<T>::destroy(Node<T>* ptr)
{
    if (!ptr)
    {
        return;
    }
    destroy(ptr->left);
    destroy(ptr->right);
    delete ptr;
}
// helper function used in insert function
template <typename T>
void BinarySearchTree<T>::insert(const T& value, Node<T>*& ptr)
{
    if (!ptr)
    {
        ptr = makeNode(value);
        return;
    }
    else if (value < ptr->data)
    {
        insert(value, ptr->left);
    }
    else
    {
        insert(value, ptr->right);
    }
}
// helper function used in preorder function
template<typename T>
void BinarySearchTree<T>::preorder(Node<T>* ptr) const
{
    if (!ptr)
    {
        return;
    }
    cout << ptr->data << endl;
    preorder(ptr->left);
    preorder(ptr->right);
}
// helper function used in inorder function
template<typename T>
void BinarySearchTree<T>::inorder(Node<T>* ptr) const
{
    if (!ptr)
    {
        return;
    }
    inorder(ptr->left);
    cout << ptr->data << endl;
    inorder(ptr->right);
}
// helper function used in postorder function
template<typename T>
void BinarySearchTree<T>::postorder(Node<T>* ptr) const
{
    if (!ptr)
    {
        return;
    }
    postorder(ptr->left);
    postorder(ptr->right);
    cout << ptr->data << endl;
}
// helper function used in search function
template<typename T>
bool BinarySearchTree<T>::search(const T& value, Node<T>* ptr) const
{
    if (!ptr)
    {
        return false;
    }
    else if (ptr->data == value)
    {
        return true;
    }
    else if (value < ptr->data)
    {
        return search(value, ptr->left);
    }
    else
    {
        return search(value, ptr->right);
    }
}
// helper function used in makeNode function
template<typename T>
Node<T>* BinarySearchTree<T>::makeNode(const T& value)
{
    Node<T>* temp = new Node<T>;
    temp->data = value;
    temp->left = 0;
    temp->right = 0;
    return temp;
}
#endif