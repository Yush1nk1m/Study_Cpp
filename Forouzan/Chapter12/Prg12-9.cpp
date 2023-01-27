/********************************************************************
 * A program which checks the name of a class with typeid operator  *
********************************************************************/
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Animal {};
class Horse {};

int main()
{
    Animal a;
    Horse h;
    cout << typeid(a).name() << endl;   // only the name of a class can be printed depending on the system
    cout << typeid(h).name() << endl;   // only the name of a class can be printed depending on the system
    return 0;
}