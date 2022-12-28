/***********************************************************
 * A program which extracts the first digit and prints it  *
***********************************************************/
#include <iostream>
using namespace std;

int main() {
    // variable declaration
    unsigned int givenInt, firstDigit;
    // receive input
    cout << "Enter a positive integer : ";
    cin >> givenInt;
    // process
    firstDigit = givenInt % 10;
    // print
    cout << "The received input : " << givenInt << endl;
    cout << "Extration the first digit : " << firstDigit << endl;
    return 0;
}