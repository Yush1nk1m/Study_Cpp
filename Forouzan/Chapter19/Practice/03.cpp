#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(10);
    for (int i = 0; i < 10; i++)
    {
        vec.at(i) = i;
    }

    // test code
    for (int i = 0; i < 10; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}