#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(int value) { cout << value << " "; }

int main()
{
    set<int> first, second, result;
    vector<int> temp(10);

    first.insert(10);
    first.insert(13);
    first.insert(14);
    first.insert(17);
    first.insert(19);
    for_each(first.begin(), first.end(), print);
    cout << endl;

    second.insert(11);
    second.insert(13);
    second.insert(14);
    second.insert(16);
    second.insert(20);
    for_each(second.begin(), second.end(), print);
    cout << endl;

    vector<int>::iterator endIter = set_intersection(first.begin(), first.end(), second.begin(), second.end(), temp.begin());
    for_each(temp.begin(), temp.end(), print);
    cout << endl;

    for (vector<int>::iterator iter = temp.begin(); iter != endIter; iter++)
    {
        result.insert(*iter);
    }

    for_each(result.begin(), result.end(), print);
    cout << endl;

    return 0;
}