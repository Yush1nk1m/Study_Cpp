/********************************************
 * A program which finds out the union set  *
********************************************/
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// print function
void print(int value)
{
    cout << value << " ";
}

int main()
{
    // create the first set
    set<int> first;
    first.insert(10);
    first.insert(19);
    first.insert(14);
    first.insert(17);
    first.insert(13);
    cout << "The elements of the first set" << endl;
    for_each(first.begin(), first.end(), print);
    cout << endl << endl;
    // create the second set
    set<int> second;
    second.insert(16);
    second.insert(14);
    second.insert(13);
    second.insert(11);
    second.insert(20);
    cout << "The elements of the second set" << endl;
    for_each(second.begin(), second.end(), print);
    cout << endl << endl;
    // find out the union set and store on the vector
    vector<int> temp(10);
    vector<int>::iterator iter;
    vector<int>::iterator endIter;
    endIter = set_union(first.begin(), first.end(), second.begin(), second.end(), temp.begin());
    // copy elements from the vector to the result set
    set<int> result;
    for (iter = temp.begin(); iter != temp.end(); iter++)
    {
        result.insert(*iter);
    }
    cout << "The elements of the result set" << endl;
    for_each(result.begin(), result.end(), print);
    cout << endl << endl;
    return 0;
}