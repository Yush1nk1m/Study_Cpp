#include <iostream>
using namespace std;

int main()
{
    unsigned int lower, upper;
    
    cout << "Enter a positive integer : ";
    cin >> lower;
    cout << "Enter a positive integer : ";
    cin >> upper;

    if (lower > upper)
    {
        unsigned int temp = lower;
        lower = upper;
        upper = temp;
    }

    for (int i = lower + 1; i < upper; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}