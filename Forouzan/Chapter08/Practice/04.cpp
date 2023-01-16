#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int i = 0;
    for (; i < 5; i++)
    {
        cout << "index " << i << ", data " << 5 << endl;
        arr[i] = 5;
    }
    for (; i < 10; i++)
    {
        cout << "index " << i << ", data " << 10 << endl;
        arr[i] = 10;
    }
}