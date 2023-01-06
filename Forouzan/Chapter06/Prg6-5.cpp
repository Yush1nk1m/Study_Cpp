/****************************************************
 * A program which counts the number of alphabet,   *
 * convert every lower case into upper case         *
****************************************************/
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    // declaration
    char ch;
    int count = 0;
    // receive characters and process
    while (cin >> noskipws >> ch)
    {
        if (isalpha(ch))
        {
            count++;
        }
        ch = toupper(ch);
        cout << ch;
    }
    // print the number of character
    cout << "The number of alphabet character : " << count << endl;
    return 0;
}