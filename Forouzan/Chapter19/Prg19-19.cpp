/****************************************************************
 * A program which stores names and scores of students on a map *
****************************************************************/
#include <map>
#include <iostream>
#include <iomanip>
#include <utility>
using namespace std;

int main()
{
    // declare a map and an iterator
    map<string, int> scores;
    map<string, int>::iterator iter;
    // store names and scores of students on the map
    scores["John"] = 52;
    scores["George"] = 71;
    scores["Mary"] = 88;
    scores["Lucie"] = 98;
    scores["Robert"] = 77;
    // print names and scores of students after sorting
    cout << "The names and scores of students" << endl;
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << setw(10) << left << iter->first << " ";
        cout << setw(4) << iter->second << endl;
    }
    return 0;
}