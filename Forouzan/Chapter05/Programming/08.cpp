#include <iostream>
using namespace std;

int main()
{
    int number;
    
    do
    {
        cout << "Enter a number in range between 0 and 100 : ";
        cin >> number;
    } while (number < 0 || number > 100);
    
    cout << "The measures of given number" << endl;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}