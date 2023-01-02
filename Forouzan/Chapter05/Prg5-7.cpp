/***********************************************************
 * A program which finds out the sum of numbers            *
 * saved in a file  with EOF control while loop statement  *
***********************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // declaration
    int sum = 0;
    int num;
    ifstream infile;
    // open a file
    infile.open("numbers.dat");
    // while loop statement
    while (infile >> num)
    {
        sum += num;
    }
    // print result
    cout << "The sum = " << sum << endl;
    infile.close();
    return 0;
}