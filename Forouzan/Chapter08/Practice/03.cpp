#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Saved data : index " << i << ", data " << i % 2 << endl;
        arr[i] = i % 2;
    }
    return 0;
}