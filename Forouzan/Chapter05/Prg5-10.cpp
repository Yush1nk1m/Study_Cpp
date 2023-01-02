/********************************************************************
 * A program which prints numbers that are in range from 1 to 300,  *
 * able to divide by 7 in table form                                * 
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declaration and initialization
    int lower = 1;
    int higher = 300;
    int divisor = 7;
    int col = 1;
    // process
    for (int i = lower; i < higher; i++)
    {
        if (i % divisor == 0)
        {
            cout << setw(4) << i;
            col++;
            if (col > 10)
            {
                cout << endl;
                col = 1;
            }
        }
    }
    return 0;
}