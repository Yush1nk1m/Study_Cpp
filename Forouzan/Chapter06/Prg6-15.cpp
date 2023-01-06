/********************************************
 * A program which swaps two values         *
 * with the pass-by-reference mechanism     *
********************************************/
#include <iostream>
using namespace std;

void swap(int& first, int& second);     // function declaration

int main()
{
    // declaration
    int first = 10;
    int second = 20;
    swap(first, second);
    // check swap
    cout << "The value of first in the main function : " << first << endl;
    cout << "The value of second in the main function : " << second << endl;
    return 0;
}

/********************************************************************************
 * swap function receives two parameters with pass-by-reference mechanism,      *
 * swaps the value of fst and the value of snd with temporary variable temp,    *
 * changes in the parameters have effect on the arguments(first, second)        *
********************************************************************************/
void swap(int& fst, int& snd)
{
    int temp = fst;
    fst = snd;
    snd = temp;
    return;
}