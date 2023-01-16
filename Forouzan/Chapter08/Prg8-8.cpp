/****************************************************************************************************
 * A program which uses a function that receives two arrays as arguments and similarly returns them *
****************************************************************************************************/
#include <iostream>
using namespace std;
/****************************************************************
 * reverse function receives two arrays as arguments            *
 * it reverses the first array and returns the seconds array    *
****************************************************************/
void reverse(const int array1[], int array2[], int size)
{
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        array2[j] = array1[i];
    }
    return;
}
/************************************************************
 * receive input and print the content of the array         *
 * this function doesn't modify the elements of the array   *
************************************************************/
void print(const int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
    // declare two arrays
    int array1[5] = {150, 170, 190, 110, 130};
    int array2[5];
    // receive result on array2 with reverse function call
    reverse(array1, array2, 5);
    // print the arrays
    print(array1, 5);
    print(array2, 5);
    return 0;
}