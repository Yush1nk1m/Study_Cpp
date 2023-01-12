#include <iostream>
#include "02.h"
using namespace std;

int main()
{
    Two two;
    two.setX(0);
    two.setA('A');

    cout << "two" << endl;
    cout << "x : " << two.getX() << endl;
    cout << "a : " << two.getA() << endl << endl;
    return 0;
}