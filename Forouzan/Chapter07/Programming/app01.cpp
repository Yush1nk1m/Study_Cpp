#include <iostream>
#include "01.h"
using namespace std;

int main()
{
    One one1;
    One one2(1, 2);
    One one3(one2);

    cout << "one1" << endl;
    cout << "x : " << one1.getX() << endl;
    cout << "y : " << one1.getY() << endl << endl;

    cout << "one2" << endl;
    cout << "x : " << one2.getX() << endl;
    cout << "y : " << one2.getY() << endl << endl;

    cout << "one3" << endl;
    cout << "x : " << one3.getX() << endl;
    cout << "y : " << one3.getY() << endl << endl;
    return 0;
}