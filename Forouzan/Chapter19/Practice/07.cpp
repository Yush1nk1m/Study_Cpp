#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        vec.insert(vec.begin(), i);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}