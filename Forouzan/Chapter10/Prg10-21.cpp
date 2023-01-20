/****************************************************
 * A program which compares strings with operator   *
****************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // string creation
    string strg1;
    string strg2(5, 'a');
    string strg3("Hello Friends");
    string strg4("Hi People", 4);
    // comparison with operators
    cout << "strg1 < strg2 : " << boolalpha << (strg1 < strg2) << endl;
    cout << "strg2 >= strg3 : " << boolalpha << (strg2 >= strg3) << endl;
    cout << "strg1 == strg2 : " << boolalpha << (strg1 == strg2) << endl;
    cout << "Hi P != strg4 : " << boolalpha << ("Hi P" != strg4) << endl;
    return 0;
}