/****************************************************
 * An application file which uses Smallest class    *
****************************************************/
#include "smallest.h"

int main()
{
    // Smallest class instantiation
    Smallest smallest;
    // function call operator use
    cout << "The current smallest value : " << smallest(5) << endl;
    cout << "The current smallest value : " << smallest(9) << endl;
    cout << "The current smallest value : " << smallest(4) << endl;
    return 0;
}