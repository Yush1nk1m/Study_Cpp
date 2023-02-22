#include <ctime>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void print(int value)
{
    cout << value << " ";
}

int main()
{
    srand(time(0));
    vector<int> vec;
    set<int> sorted;

    for (int i = 0; i < 100; i++)
    {
        vec.push_back(rand() % 10000);
    }
    for_each(vec.begin(), vec.end(), print);
    cout << endl << endl;
    
    for (int i = 0; i < vec.size(); i++)
    {
        sorted.insert(vec.at(i));
    }
    vec.clear();

    for (set<int>::iterator iter = sorted.begin(); iter != sorted.end(); iter++)
    {
        cout << (*iter) << " ";
        vec.push_back(*iter);
    }
    cout << endl << endl;
    for_each(vec.begin(), vec.end(), print);
    cout << endl;

    return 0;
}