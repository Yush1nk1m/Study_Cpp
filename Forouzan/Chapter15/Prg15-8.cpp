/****************************************************
 * An application file which uses function template *
****************************************************/
#include "smaller.h"

int main()
{
    cout << "The smaller one between a and B = " << smaller('a', 'B') << endl;
    cout << "The smaller one between 12 and 15 = " << smaller(12, 15) << endl;
    cout << "The smaller one between 44.2 and 33.1 = " << smaller(44.2, 33.1) << endl;
    return 0;
}