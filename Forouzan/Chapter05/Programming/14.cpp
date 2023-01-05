#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter an integer : ";
    cin >> number;

    cout << "The reverse number of the given number : ";
    do
    {
        cout << (number % 10);
        number /= 10;
    } while (number > 0);
    
    return 0;
}