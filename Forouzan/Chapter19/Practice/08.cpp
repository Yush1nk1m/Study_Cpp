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

    vec.erase(vec.begin());

    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << (*iter) << " ";
    }
    cout << endl;

    return 0;
}