/************************************************************
 * A program which sorts a vector with sorting algorithm    *
************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// print function's definition
void print(int value)
{
    cout << value << " ";
}

int main()
{
    // vector instantiation
    vector<int> vec;
    // push 6 elements and print
    vec.push_back(17);
    vec.push_back(10);
    vec.push_back(13);
    vec.push_back(18);
    vec.push_back(15);
    vec.push_back(11);
    cout << "The origin vector" << endl;
    for_each(vec.begin(), vec.end(), print);
    cout << endl << endl;
    // sort the vector in ascending order and print
    cout << "Ascending ordered vector" << endl;
    sort(vec.begin(), vec.end());
    for_each(vec.begin(), vec.end(), print);
    cout << endl << endl;
    // sort the vector in descending order and print
    cout << "Descending ordered vector" << endl;
    sort(vec.begin(), vec.end(), greater<int>());
    for_each(vec.begin(), vec.end(), print);
    cout << endl << endl;
    return 0;
}