/****************************************************************************
 * A program which defines and utilizes a function that checks              *
 * which number is larger between two user inputs of two positive integers  *
****************************************************************************/
#include <iostream>
using namespace std;

/****************************************************************************
 * larger function receives two values as arguments and                     *
 * return the larger value between two values,                              *
 * has no additional action                                                 *
****************************************************************************/
int larger(int fst, int snd)
{
    int max;
    if (fst > snd)
    {
        max = fst;
    }
    else
    {
        max = snd;
    }
    return (max);
}

int main()
{
    // declaration
    int first, second;
    // receive input
    cout << "Enter the first number : ";
    cin >> first;
    cout << "Enter the second number : ";
    cin >> second;
    // function call
    cout << "The larger number between two numbers = " << larger(first, second) << endl;
    return 0;
}