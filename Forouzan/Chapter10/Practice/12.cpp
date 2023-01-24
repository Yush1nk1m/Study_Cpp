#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    do
    {
        getline(cin, str);
    } while (str.size() < 4);
    
    string first4 = str.substr(0, 4);
    string last4 = str.substr(str.size() - 4);

    cout << "The first 4 characters : " << first4 << endl;
    cout << "The last 4 characters : " << last4 << endl;

    return 0;
}