#include <iostream>
using namespace std;

int main()
{
    int number, positive = 0, negative = 0;
    
    do
    {
        cout << "Enter an integer other than zero : ";
        cin >> number;
        
        if (number > 0) positive++;
        if (number < 0) negative++;
    } while (number != 0);

    cout << "The number of positive integer : " << positive << endl;
    cout << "The number of negative integer : " << negative << endl;

    return 0;
}