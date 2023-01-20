/************************************************************************************
 * A program which creates C++ string and uses functions related to size, capacity  *
************************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // string object creation
    string strg("Hello my friends");
    // use functions related to size, capacity
    cout << "The size : " << strg.size() << endl;
    cout << "The maximum size : " << strg.max_size() << endl;
    cout << "The capacity : " << strg.capacity() << endl;
    cout << "Whether it is a empty string : " << boolalpha << strg.empty() << endl << endl;
    // use functions related to size, capacity after reservation
    strg.reserve(20);
    cout << "The size : " << strg.size() << endl;
    cout << "The maximum size : " << strg.max_size() << endl;
    cout << "The capacity : " << strg.capacity() << endl;
    cout << "Whether it is a empty string : " << boolalpha << strg.empty() << endl;
    return 0;
}