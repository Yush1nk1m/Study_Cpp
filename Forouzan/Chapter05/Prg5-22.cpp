/****************************************************************
 * A program which checks if there is any number that can be    *
 * divided by 7 in a list                                       *
****************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    bool success = false;
    int size;
    int item;
    // receive input
    do
    {
        cout << "Enter the size of a list : ";
        cin >> size;
    } while (size < 0);
    // process
    for (int i = 0; (i < size) && (!success); i++)
    {
        cout << "Enter the next number : ";
        cin >> item;
        success = (item % 7 == 0);
    }
    // condition split
    if (success)
    {
        cout << item << " can be divided by 7." << endl;
    }
    else
    {
        cout << "There is no number that can be divided by 7 in the list." << endl;
    }
    return 0;
}