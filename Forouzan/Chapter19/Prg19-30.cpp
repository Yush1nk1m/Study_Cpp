/****************************************************
 * A program which uses accumulate numeric function *
****************************************************/
#include <vector>
#include <numeric>
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
    // vector instantiation and print
    vector<int> vec;
    vec.push_back(17);
    vec.push_back(10);
    vec.push_back(13);
    vec.push_back(13);
    vec.push_back(18);
    vec.push_back(15);
    vec.push_back(17);
    for_each(vec.begin(), vec.end(), print);
    cout << endl;
    // find out the sum of the vector and print
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "The sum = " << sum << endl;
    return 0;
}