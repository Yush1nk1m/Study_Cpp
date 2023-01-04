/*******************************************************************
 * A program which finds out the minimum and the maximum value of  *
 * a list when the size of the list is given                       *
*******************************************************************/
#include <iostream>
#include <limits>       // a header file to check a range of data types
using namespace std;

int main()
{
    // variable declaration
    int size;
    int number, smallest, largest;
    // initialization
    smallest = numeric_limits<int>::max();
    largest = numeric_limits<int>::min();
    // receive input
    do
    {
        cout << "Enter the size of a list as a non-negative number : ";
        cin >> size;
    } while (size <= 0);
    // process
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter the next number : ";
        cin >> number;
        if (number < smallest)
        {
            smallest = number;
        }
        if (number > largest)
        {
            largest = number;
        }
    }
    // print result
    cout << "The minimum value = " << smallest << endl;
    cout << "The maximum value = " << largest << endl;
    return 0;
}