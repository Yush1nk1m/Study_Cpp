#include <iostream>
using namespace std;

int main()
{
    bool palindrome = true;
    int number, reverse = 0, digits = 1, factor = 1;
    
    do
    {
        cout << "Enter an integer : ";
        cin >> number;
    } while (number < 0);

    int temp = number;
    while (temp >= 10)
    {
        digits++;
        factor *= 10;
        temp /= 10;
    }

    temp = number;

    while (digits > 0)
    {
        reverse += ((temp % 10) * factor);
        temp /= 10;
        factor /= 10;
        digits--;
    }

    while (number > 0)
    {
        if (number % 10 != reverse % 10)
        {
            palindrome = false;
            break;
        }
        number /= 10;
        reverse /= 10;
    }

    if (palindrome) cout << "The given number is a palindrome." << endl;
    else cout << "The given number is not a palindrome." << endl;

    return 0;
}