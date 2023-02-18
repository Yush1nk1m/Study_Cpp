/************************************************************
 * A program which prints the number of word in a sentence  *
************************************************************/
#include <map>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // map, iterator, and sentence declaration
    map<string, int> freq;
    map<string, int>::iterator iter;
    string word;
    // read a sentence and generate a frequency table with a map
    cout << "Enter a sentence : ";
    while (cin >> word)
    {
        ++freq[word];
    }
    // words and frequencies output
    for (iter = freq.begin(); iter != freq.end(); iter++)
    {
        cout << left << setw(10) << iter->first << iter->second << endl;
    }
    return 0;
}