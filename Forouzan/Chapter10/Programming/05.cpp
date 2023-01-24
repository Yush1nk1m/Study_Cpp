#include <string>
#include <iostream>
using namespace std;

void noDuplicated(string&);
string commonChar(const string&, const string&);

int main()
{
    string str1, str2;

    cout << "Enter the first string : ";
    getline(cin, str1);

    cout << "Enter the second string : ";
    getline(cin, str2);

    noDuplicated(str1);
    noDuplicated(str2);

    cout << "The common characters : " << commonChar(str1, str2) << endl;

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

string commonChar(const string& str1, const string& str2)
{
    int size1 = str1.size(), size2 = str2.size();
    string result = "";

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (str1[i] == str2[j])
            {
                result += str2[j];
            }
        }
    }

    return str2;
}