/************************************************
 * A program which checks the state of a stream *
************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer(enter eof to exit) : " << endl;
    while (cin >> n)
    {
        cout << n * 2 << " ";
    }
    return 0;
}