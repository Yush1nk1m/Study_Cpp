#include <string>
#include <iostream>
using namespace std;

int main()
{
    string octal;
    int decimal = 0;

    do
    {
        cout << "Enter an octal number : ";
        cin >> octal;
    } while (octal.find_first_not_of("01234567", 0) < octal.size());
    
    int size = octal.size();
    for (int i = 0; i < size; i++)
    {
        decimal *= 8;
        decimal += octal[i] - 48;
    }

    cout << "The decimal number of the given octal number : " << decimal << endl;

    return 0;
}