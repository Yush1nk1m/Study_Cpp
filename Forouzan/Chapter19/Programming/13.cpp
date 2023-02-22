#include <set>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void print(int value)
{
    cout << value << " ";
}

int main()
{
    set<int> first, second;

    first.insert(10);
    first.insert(13);
    first.insert(14);
    first.insert(17);
    first.insert(19);
    cout << "first : "; for_each(first.begin(), first.end(), print); cout << endl;

    second.insert(11);
    second.insert(13);
    second.insert(14);
    second.insert(16);
    second.insert(20);
    cout << "second : "; for_each(second.begin(), second.end(), print); cout << endl;

    vector<int> temp(10);
    vector<int>::iterator endIter = set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), temp.begin());

    set<int> result;
    for (vector<int>::iterator iter = temp.begin(); iter != endIter; iter++) result.insert(*iter);

    cout << "result : "; for_each(result.begin(), result.end(), print); cout << endl;

    return 0;
}