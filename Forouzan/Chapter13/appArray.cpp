/************************************************
 * An application file which uses Array class   *
************************************************/
#include "array.h"

int main()
{
    // instantiate Array class which has 3 elements
    Array arr(3);
    // designate the values with [] operator
    arr[0] = 22.31;
    arr[1] = 78.61;
    arr[2] = 65.22;
    // extract the values with [] operator
    for (int i = 0; i < 3; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}