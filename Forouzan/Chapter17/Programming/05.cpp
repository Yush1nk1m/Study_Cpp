/* No need to use non-recursive function */
#include <iostream>
#include <string>
using namespace std;

char hexatable[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
string toHexadecimal(int n)
{
    if (n == 0)
    {
        return "";
    }
    else
    {
        return toHexadecimal(n / 16) + hexatable[n % 16];
    }
}

int main()
{
    cout << toHexadecimal(78) << endl;
    return 0;
}