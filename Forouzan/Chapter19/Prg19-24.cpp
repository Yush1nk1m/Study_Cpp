/****************************************************************************
 * A program which uses the pointer for a function and the function object  *
****************************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

// user-defined print function
void print(int value)
{
    cout << value << " ";
}

int main()
{
    // create a vector with 4 elements
    vector<int> vec;
    vec.push_back(24);
    vec.push_back(42);
    vec.push_back(73);
    vec.push_back(92);
    // print elements with the pointer for a function
    for_each(vec.begin(), vec.end(), print);
    cout << endl;
    // reverse the sign of every element and print
    transform(vec.begin(), vec.end(), vec.begin(), negate<int>());
    for_each(vec.begin(), vec.end(), print);
    return 0;
}