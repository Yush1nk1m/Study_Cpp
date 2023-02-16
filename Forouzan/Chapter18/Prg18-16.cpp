/********************************************************************************
 * A application file which carries out some tests for BinarySearchTree class   *
********************************************************************************/
#include "binarysearchtree.cpp"

int main()
{
    // create a binary search tree
    BinarySearchTree<string> bst;
    // insert 6 nodes
    bst.insert("Michael");
    bst.insert("Jane");
    bst.insert("Sophie");
    bst.insert("Thomas");
    bst.insert("Rose");
    bst.insert("Richard");
    // pre-order traversal output
    cout << "pre-order traversal output" << endl;
    bst.preorder();
    cout << endl << endl;
    // in-order traversal output
    cout << "in-order traversal output" << endl;
    bst.inorder();
    cout << endl << endl;
    // post-order traversal output
    cout << "post-order traversal output" << endl;
    bst.postorder();
    cout << endl << endl;
    // value search
    cout << "Search : " << endl;
    cout << "search(\"Sophie\") = " << boolalpha << bst.search("Sophie") << endl;
    cout << "search(\"Mary\") = " << boolalpha << bst.search("Mary") << endl;
    return 0;
}