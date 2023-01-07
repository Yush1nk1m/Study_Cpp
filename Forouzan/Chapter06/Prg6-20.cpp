/********************************************************************
 * A program which checks shadowing occured on a local variables    *
 * that are declared in the inner block and outer block             *
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int sum = 5;
    cout << sum << endl;
    {
        int sum = 3;
        cout << sum << endl;    // use variable sum in the inner block
    }
    cout << sum << endl;        // use variable sum in the outer block
    return 0;
}