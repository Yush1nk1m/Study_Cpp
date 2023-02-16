/****************************************
 * A simple program which uses iterator *
****************************************/
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // generate a vector with 10 elements and 2 iterators
    vector<int> vec(10);
    vector<int>::iterator iter;
    vector<int>::reverse_iterator rIter;
    // modify the value of elements
    for (int i = 0; i < 10; i++)
    {
        vec.at(i) = i * i;
    }
    // print elements with a basic iterator
    cout << "Basic search : ";
    for (iter = vec.begin(); iter != vec.end(); ++iter)
    {
        cout << setw(4) << *iter;
    }
    cout << endl;
    // print elements with a reverse iterator
    cout << "Reverse search : ";
    for (rIter = vec.rbegin(); rIter != vec.rend(); ++rIter)
    {
        cout << setw(4) << *rIter;
    }
    cout << endl;
    return 0;
}