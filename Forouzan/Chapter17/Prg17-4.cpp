/****************************************************
 * A program which reverses a string recursively    *
****************************************************/
#include <iostream>
#include <string>
using namespace std;

// recursive function declaration
string reverse(string str);

int main()
{
    // test
    cout << "ABCD reverse = " << reverse("ABCD") << endl;
    cout << "Hello reverse = " << reverse("Hello") << endl;
    cout << "Bye reverse = " << reverse("Bye") << endl;
    return 0;
}

// recursive function definition
string reverse(string str)
{
    if (str.length() <= 1)
    {
        return str;
    }
    else
    {
        return reverse(str.substr(1, str.length() - 1)) + str.substr(0, 1);
    }
}