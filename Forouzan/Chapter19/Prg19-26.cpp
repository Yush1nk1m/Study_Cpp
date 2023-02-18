/********************************************
 * A program which uses mutating algorithms *
********************************************/
#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;

// print function definition
void print(int value)
{
    cout << value << " ";
}

int main()
{
    // vector instantiation
    vector<int> vec;
    // add elements
    vec.push_back(11);
    vec.push_back(14);
    vec.push_back(17);
    vec.push_back(23);
    vec.push_back(35);
    vec.push_back(52);
    // print the original
    cout << "The origin vector" << endl;
    for_each(vec.begin(), vec.end(), print);
    cout << endl << endl;
    // reverse the vector and print
    cout << "The reversed vector" << endl;
    reverse(vec.begin(), vec.end());
    for_each(vec.begin(), vec.end(), print);
    cout << endl << endl;
    // rotate the vector and print
    cout << "The rotated vector" << endl;
    rotate(vec.begin(), vec.begin() + 2, vec.end());
    for_each(vec.begin(), vec.end(), print);
    cout << endl << endl;
    // shuffle the vector and print
    cout << "The shuffled vector" << endl;
    random_shuffle(vec.begin(), vec.end());
    for_each(vec.begin(), vec.end(), print);
    cout << endl << endl;
    return 0;
}