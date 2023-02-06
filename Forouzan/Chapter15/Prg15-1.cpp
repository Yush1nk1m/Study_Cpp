/********************************************************************
 * A program which implements smaller functions for each data type  *
********************************************************************/
#include <iostream>
using namespace std;

// a function which finds out the smaller one between two characters
char smaller(char first, char second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}
// a function which finds out the smaller one between two integers
int smaller(int first, int second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}
// a function which finds out the smaller one between two floating points
double smaller(double first, double second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}

int main()
{
    cout << "The smaller one between a and B = " << smaller('a', 'B') << endl;
    cout << "The smaller one between 12 and 15 = " << smaller(12, 15) << endl;
    cout << "The smaller one between 44.2 and 33.1 = " << smaller(44.2, 33.1) << endl;
    return 0;
}