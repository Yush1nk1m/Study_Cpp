#include <string>
#include <iostream>
using namespace std;

int main()
{
    int decimal;
    string temp = "";

    do
    {
        cout << "Enter a positive decimal integer : ";
        cin >> decimal;
    } while (decimal <= 0);

    while (decimal > 0)
    {
        int left = decimal % 16;
        if (left > 9)
        {
            temp += (left + 55);
        }
        else
        {
            temp += (left + 48);
        }
        decimal /= 16;
    }

    int size = temp.size();
    string hexadecimal = "";
    for (int i = size - 1; i >= 0; i--)
    {
        hexadecimal += temp[i];
    }

    cout << "The hexadecimal number of the given number : " << hexadecimal << endl;

    return 0;
}