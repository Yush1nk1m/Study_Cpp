#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void deleteAt(vector<T>& vec, int index)
{
    vec.erase(vec.begin() + index);
}

int main()
{
    vector<int> vec;
    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }

    deleteAt(vec, 5);

    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << (*iter) << " ";
    }
    cout << endl;

    return 0;
}