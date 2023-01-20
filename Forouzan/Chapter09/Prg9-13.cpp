/************************************************************
 * A program which uses global variable, static variable    *
 * that is continuously existing during the program         *
************************************************************/
#include <iostream>
using namespace std;

int first = 20;                 // global variable placed on static memory
static int second = 30;         // global static variable placed on static memory

int main()
{
    static int third = 50;      // static variable placed on static memory

    cout << "The value of the global variable : " << first << endl;
    cout << "The value of the global static variable : " << second << endl;
    cout << "The value of the local static variable : " << third << endl;
    return 0;
}