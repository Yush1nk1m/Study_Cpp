/************************************************************************************
 * Create a list with 5 elements and print with basic iterator and reverse iterator *
************************************************************************************/
#include <list>
#include <iostream>
using namespace std;

int main()
{
    // instantiation and variable creation
    list<int> List;
    int value;
    // receive input of 5 integers and store
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an integer : ";
        cin >> value;
        List.push_back(value);
    }
    // print in basic direction
    cout << "Basic direction" << endl;
    list<int>::iterator iter;
    for (iter = List.begin(); iter != List.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    // print in reverse direction
    cout << "Reverse direction" << endl;
    list<int>::reverse_iterator rIter;
    for (rIter = List.rbegin(); rIter != List.rend(); rIter++)
    {
        cout << *rIter << " ";
    }
    cout << endl;
    return 0;
}