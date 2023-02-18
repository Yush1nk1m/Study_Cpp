/************************************************
 * A program which uses non-mutating algorithm  *
************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// isEven function definition
bool isEven(int value)
{
    return (value % 2 == 0);
}
// timesTwo function definition
void timesTwo(int& value)
{
    value *= 2;
}
// print function definition
void print(int value)
{
    cout << value << " ";
}

int main()
{
    // create a vector of integers
    vector<int> vec;
    // push 10 elements in the vector
    vec.push_back(17);
    vec.push_back(10);
    vec.push_back(13);
    vec.push_back(13);
    vec.push_back(18);
    vec.push_back(15);
    vec.push_back(17);
    vec.push_back(13);
    vec.push_back(13);
    vec.push_back(18);
    // print the original
    cout << "The values of origin vector" << endl;
    for_each(vec.begin(), vec.end(), print);
    cout << endl << endl;
    // count the number of 10 in the vector
    cout << "The number of 10 in the vector = ";
    cout << count(vec.begin(), vec.end(), 10);
    cout << endl << endl;
    // count the number of even number in the vector
    cout << "The number of even number in the vector = ";
    cout << count_if(vec.begin(), vec.end(), isEven);
    cout << endl << endl;
    // multiply 2 on every element in the vector
    cout << "Multiply 2 on the every element in the vector" << endl;
    for_each(vec.begin(), vec.end(), timesTwo);
    for_each(vec.begin(), vec.end(), print);
    return 0;
}