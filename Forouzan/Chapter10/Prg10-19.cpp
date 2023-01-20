/************************************************************************
 * A program which finds out words in a line of string and prints them  *
************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    string text, word;
    string delimeter(" \n");
    string::size_type wStart, wEnd;
    string::size_type npos;         // the case when the complier raises error, add =-1 to the end
    // receive input of a line
    cout << "Enter a line : ";
    getline(cin, text);
    // search character and extract word
    cout << "Extracted word : " << endl;
    wStart = text.find_first_not_of(delimeter, 0);
    while (wStart < npos)
    {
        wEnd = text.find_first_of(delimeter, wStart);
        cout << text.substr(wStart, wEnd - wStart) << endl;
        wStart = text.find_first_not_of(delimeter, wEnd);
    }
    return 0;
}