#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void print(T value)
{
    cout << value << " ";
}

int main()
{
    vector<int> vec1, vec2;

    for (int i = 0; i < 10; i++)
    {
        vec1.push_back(i);
    }

    for (vector<int>::iterator iter = vec1.begin() + 2; iter != vec1.begin() + 7; iter++)
    {
        vec2.push_back(*iter);
    }

    for_each(vec1.begin(), vec1.end(), print<int>);
    cout << endl;

    for_each(vec2.begin(), vec2.end(), print<int>);
    cout << endl;

    return 0;
}