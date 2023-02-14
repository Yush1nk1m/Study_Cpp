/* No need to use non-recursive function */
#include <iostream>
#include <string>
using namespace std;

string toBinary(int n)
{
    if (n == 0)
    {
        return "";
    }
    else
    {
        return toBinary(n / 2) + to_string(n % 2);
    }
}

int main()
{
    cout << toBinary(78) << endl;
    return 0;
}