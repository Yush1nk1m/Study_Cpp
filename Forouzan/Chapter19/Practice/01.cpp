#include <vector>
#include <iostream>
using namespace std;

template<typename T>
void printVector(const vector<T>& vec)
{
    const int SIZE = vec.size();
    for (int i = 0; i < SIZE; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec;
    for (int i = 1; i <= 10; i++)
    {
        vec.push_back(i);
    }
    printVector(vec);

    return 0;
}