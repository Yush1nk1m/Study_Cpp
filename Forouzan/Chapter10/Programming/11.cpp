#include <string>
#include <iostream>
using namespace std;

int main()
{
    string hexadecimal;
    int decimal = 0;

    do
    {
        cout << "Enter a hexadecimal number : ";
        cin >> hexadecimal;
    } while (hexadecimal.find_first_not_of("0123456789ABCDEFabcdef", 0) < hexadecimal.size());

    int size = hexadecimal.size();
    for (int i = 0; i < size; i++)
    {
        decimal *= 16;
        if (hexadecimal[i] <= '9')
        {
            decimal += (hexadecimal[i] - 48);
        }
        else if (hexadecimal[i] <= 'F')
        {
            decimal += (hexadecimal[i] - 55);
        }
        else
        {
            decimal += (hexadecimal[i] - 87);
        }
    }

    cout << "The decimal number of the given hexadecimal number : " << decimal << endl;

    return 0;
}