#include <tchar.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    // dynamically generate an object as the form of an array
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i)
        arr[i] = (i + 1) * 10;
    
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << endl;
    
    // deletion of an array form must be the array form
    delete[] arr;

    return 0;
}