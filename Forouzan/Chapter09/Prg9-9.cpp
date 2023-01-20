/********************************************************
 * A program which shows how to access to the element   *
 * of an array with both index and pointer              *
********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // array declaration, initialization
    int numbers[5] = {10, 11, 12, 13, 14};
    // access to the array elements with indexing
    cout << "Access to the array elements with indexing" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << "   ";
    }
    cout << endl;
    // access to the array elements with pointing
    cout << "Access to the array elements with pointing" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(numbers + i) << "   ";
    }
    cout << endl;
    return 0;
}