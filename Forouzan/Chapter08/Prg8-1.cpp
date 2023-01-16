/********************************************
 * A program which reads integer list and   *
 * prints reversed list                     *
********************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    const int CAPACITY = 10;
    int numbers[CAPACITY];
    int size;
    // receive input of size from an user and do data validation
    do
    {
        cout << "Enter the size(1 ~ 10) : ";
        cin >> size;
    } while (size < 1 || size > CAPACITY);
    // receive integer input
    cout << "Enter the " << size << " numbers of integer : ";
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    // reversely print input integers
    cout << "Reversely print the input integers : ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}