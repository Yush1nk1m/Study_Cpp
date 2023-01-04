/*************************************************************
 * A program which prints multiplication table               *
 * in range between 2 and 10 with the nested loop statement  *
*************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declare a variable 'size'
    int size;
    // receive and do data validation
    do
    {
        cout << "Enter the size of a table : ";
        cin >> size;
    } while (size < 2 || size > 10);
    // print table with nested loop statement
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }
    return 0;
}