#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
using namespace std;

void print(int value) { cout << value << " "; }

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
    vector<int>::iterator endIter = set_difference(first.begin(), first.end(), second.begin(), second.end(), temp.begin());

    set<int> AdB;
    for (vector<int>::iterator iter = temp.begin(); iter != endIter; iter++) AdB.insert(*iter);

    endIter = set_difference(second.begin(), second.end(), first.begin(), first.end(), temp.begin());

    set<int> BdA;
    for (vector<int>::iterator iter = temp.begin(); iter != endIter; iter++) BdA.insert(*iter);

    cout << "A - B : "; for_each(AdB.begin(), AdB.end(), print); cout << endl;
    cout << "B - A : "; for_each(BdA.begin(), BdA.end(), print); cout << endl;

    return 0;
}