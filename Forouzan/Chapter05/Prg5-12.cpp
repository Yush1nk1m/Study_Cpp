/****************************************************************
 * A program which prints the most left digit of input integer  *
 * with do-while loop statement                                 *
****************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declaration
    int num;
    short leftDigit;
    // receive input
    cout << "Enter a non-negative integer : ";
    cin >> num;
    // loop statement
    do
    {
        leftDigit = num % 10;
        num /= 10;
    } while (num > 0);
    // print
    cout << "The most left digit : " << leftDigit << endl;
    return 0;
}