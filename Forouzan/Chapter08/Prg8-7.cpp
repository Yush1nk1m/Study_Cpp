/************************************************************
 * A program which uses a function that receives            *
 * parameters of array name, size and modifies the array    *
************************************************************/
#include <iostream>
using namespace std;

/********************************************************
 * multiplyByTwo function modifies an array passed      *
 * as an argument hence const qualifier cannot be used  *
********************************************************/
void multiplyByTwo(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        numbers[i] *= 2;
    }
    return;
}
/************************************************************
 * print function receives array name, size as arguments    *
 * and prints them with the data                            *
 * it doesn't modify the elements of the array              *
************************************************************/
void print(const int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
    // declare and initialize an array
    int numbers[5] = {150, 170, 190, 110, 130};
    // print the array before modification
    print(numbers, 5);
    // motify the array with multiplyByTwo function
    multiplyByTwo(numbers, 5);
    // print the array after modification
    print(numbers, 5);
    return 0;
}