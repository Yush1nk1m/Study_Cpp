/************************************************************
 * A program which does test for 4 user-defined functions   *
 * that is made in customized.h file                        *
************************************************************/
#include "customized.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // string declaration
    string strg("abcdefgh");
    // pushFront function test
    cout << "A string before pushFront : " << strg << endl;
    pushFront(strg, 'A');
    cout << "The string after pushFront : " << strg << endl;
    cout << endl;
    // pushBack function test
    cout << "A string before pushBack : " << strg << endl;
    pushBack(strg, 'Z');
    cout << "The string after pushBack : " << strg << endl;
    cout << endl;
    // popFront function test
    cout << "A string before popFront : " << strg << endl;
    char c1 = popFront(strg);
    cout << "The string after popFront : " << strg << endl;
    cout << "Extracted character : " << c1 << endl;
    cout << endl;
    // popBack function test
    cout << "A string before popBack : " << strg << endl;
    char c2 = popBack(strg);
    cout << "The string after popBack : " << strg << endl;
    cout << "Extracted character : " << c2 << endl;
    cout << endl;
    return 0;
}