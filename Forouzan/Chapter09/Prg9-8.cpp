/************************************************
 * A program for checking that a system handles *
 * array elements as a pointer                  *
************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declare array that has 5 int datum
    int arr[5];
    // print address with pointer operation and & operator
    for (int i = 0; i < 5; i++)
    {
        cout << "Address with the pointer operation : " << i;
        cout << arr + i << endl;
        cout << "Address with & operator : " << i;
        cout << &arr[i] << endl << endl;
    }
    return 0;
}