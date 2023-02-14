#include <iostream>
#include <cmath>
using namespace std;

int reverse(int);
int reverse(int, int);

int reverse(int n)
{
    int temp = n;
    int power;
    for (power = 0; temp > 0; power++, temp /= 10);
    return reverse(n, power);
}

int reverse(int n, int power)
{
    if (power == 1)
    {
        return n;
    }
    else
    {
        return ((n % 10) * pow(10, power - 1)) + reverse(n / 10, power - 1);
    }
}

int main()
{
    cout << reverse(12789) << endl;
    return 0;
}