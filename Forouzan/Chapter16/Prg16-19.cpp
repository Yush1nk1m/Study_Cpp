/********************************************
 * A program which uses string stream class *
********************************************/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // istringstream object use
    istringstream iss("Hello friends!");
    cout << iss.str() << endl;
    iss.str("Hello world!");
    cout << iss.str() << endl << endl;
    // ostringstream object use
    ostringstream oss("Bye friends!");
    cout << oss.str() << endl;
    oss.str("Bye world!");
    cout << oss.str() << endl;
    return 0;
}