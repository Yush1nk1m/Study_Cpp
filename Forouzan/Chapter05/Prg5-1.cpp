/***********************************************************
 * Print a message for 10 times with while loop statement  *
***********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration and initialization counter
    int counter = 0;
    // while loop statement
    while (counter < 10)    // repeat 10 times
    {
        cout << "Hello world!" << endl;
        counter++;
    }
    return 0;
}