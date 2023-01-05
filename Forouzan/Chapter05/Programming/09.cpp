#include <iostream>
using namespace std;

int main()
{
    int lower, upper;

    do
    {
    cout << "Enter an integer in range between 0 and 100 : ";
    cin >> lower;
    } while (lower < 0 || lower > 100);

    do
    { 
    cout << "Enter an integer in range between 0 and 100 : ";
    cin >> upper;
    } while (upper < 0 || upper > 100);

    if (lower > upper)
    {
        int temp = lower;
        lower = upper;
        upper = temp;
    }

    if (lower == 0 || upper == 0) return 0;

    cout << "The common measures of given numbers" << endl;
    for (int i = 1; i <= lower; i++)
    {
        if ((lower % i == 0) && (upper % i == 0))
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}