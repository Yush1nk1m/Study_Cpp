/****************************************************
 * A program which uses binary search on a vector   *
****************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // vector instantiation
    vector<int> vec;
    // add 6 elements
    vec.push_back(17);
    vec.push_back(10);
    vec.push_back(13);
    vec.push_back(18);
    vec.push_back(15);
    vec.push_back(11);
    // vector sorting
    sort(vec.begin(), vec.end());
    // vector searching
    cout << "The result for searching 10 : " << boolalpha << binary_search(vec.begin(), vec.end(), 10) << endl;
    cout << "The result for searching 19 : " << boolalpha << binary_search(vec.begin(), vec.end(), 19) << endl;
    return 0;
}