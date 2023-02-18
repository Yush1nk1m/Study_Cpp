/************************************************************
 * A program which uses for_each algorithm                  *
 * that applies a function on every element in the range    *
************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// print function definition
void print(int value)
{
    cout << value << " ";
}

int main()
{
    // create a vector object and push 3 elements
    vector<int> vec;
    vec.push_back(24);
    vec.push_back(42);
    vec.push_back(73);
    // print elements with print function
    for_each(vec.begin(), vec.end(), print);
    return 0;
}