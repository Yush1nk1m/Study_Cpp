/************************************************************
 * An application file which does some tests for List class *
************************************************************/
#include "list.cpp"
#include <string>

int main()
{
    // instantiation of List object
    List<string> list;
    // add 6 nodes to the list
    list.insert(0, "Micheal");
    list.insert(1, "Jane");
    list.insert(2, "Sophie");
    list.insert(3, "Thomas");
    list.insert(4, "Rose");
    list.insert(5, "Richard");
    // print nodes of the list
    cout << "Printing list" << endl;
    list.print();
    // print only 3 nodes
    cout << "Printing only a few nodes" << endl;
    cout << list.get(0) << endl;
    cout << list.get(3) << endl;
    cout << list.get(5) << endl;
    // delete 2 nodes
    cout << "Deleting few nodes and printing" << endl;
    list.erase(0);
    list.erase(3);
    list.print();
    // print the size of the list after deletion
    cout << "Checking the size of the list" << endl;
    cout << "The size of the list : " << list.size() << endl;
    return 0;
}