#include <string>
#include <iostream>
using namespace std;

void noDuplicated(string&);

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    noDuplicated(str);
    cout << "The string after processing that removes duplicated characters : " << str << endl;

    return 0;
}

void noDuplicated(string& str)
{
    int size = str.size();
    int i = 0;
    
    while (i <= size)
    {
        int j = i + 1;
        while (j <= size)
        {
            if (str[i] == str[j])
            {
                str = str.substr(0, j) + str.substr(j + 1);
                size--;
            }
            else
            {
                j++;
            }
        }
        i++;
    }
}