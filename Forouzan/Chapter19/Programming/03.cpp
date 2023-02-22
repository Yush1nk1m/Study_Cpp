#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> names;
    names.push_back("Yushin");
    names.push_back("Yeonu");
    names.push_back("Yeonseo");
    names.push_back("Jinhee");
    names.push_back("Choco");

    for (vector<string>::iterator iter = names.begin(); iter != names.end(); iter++)
    {
        cout << (*iter) << " ";
    }
    cout << endl;

    sort(names.begin(), names.end());

    for (vector<string>::iterator iter = names.begin(); iter != names.end(); iter++)
    {
        cout << (*iter) << " ";
    }
    cout << endl;

    return 0;
}