#include <iostream>
#include <string>
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
        temp += (decimal % 8 + 48);
        decimal /= 8;
    }
    
    string octal = "";
    int size = temp.size();
    for (int i = size - 1; i >= 0; i--)
    {
        octal += temp[i];
    }

    cout << "The octal number of the given decimal number : " << octal << endl;

    return 0;
}