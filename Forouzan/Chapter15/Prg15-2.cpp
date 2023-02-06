/********************************************************************************************
 * A program which uses the template function that finds out smaller one between two values *
********************************************************************************************/
#include <iostream>
using namespace std;

// template function definition
template<typename T>
T smaller(T first, T second)
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