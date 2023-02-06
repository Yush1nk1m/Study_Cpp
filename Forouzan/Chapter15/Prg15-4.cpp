/****************************************************
 * A program which uses a template function         *
 * that prints every data type and size of array    *
****************************************************/
#include <iostream>
using namespace std;

// template function definition
template<typename T, int N>
void print(T(&array)[N])
{
    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    // array creation
    int arr1[4] = {7, 3, 5, 1};
    double arr2[3] = {7.5, 6.1, 4.6};
    // template function call
    print(arr1);
    print(arr2);
    return 0;
}