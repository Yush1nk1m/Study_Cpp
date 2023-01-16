/****************************************************************
 * A program which uses a function that receives parameters of  *
 * array name, size and prints them                             *
****************************************************************/
#include <iostream>
using namespace std;
/************************************************************
 * print function receives parameters of array name, size   *
 * and prints the content of the array                      *
 * it doesn't modify the elements of the array              *
************************************************************/
void print(const int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    return;
}

int main()
{
    // declare and initialize an array
    int numbers[15] = {5, 7, 9, 11, 13};
    // call print function
    print(numbers, 5);
    return 0;
}