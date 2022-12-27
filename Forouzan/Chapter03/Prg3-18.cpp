/*****************************************************
 * Check overflow and underflow of unsigned integer  *
*****************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    // searching maximum and minimum values of unsigned int type
    unsigned int num1 = numeric_limits<unsigned int>::max();
    unsigned int num2 = numeric_limits<unsigned int>::min();
    // print maximum and minimum values
    cout << "The maximum value of unsigned integer : " << num1 << endl;
    cout << "The minimum value of unsigned integer : " << num2 << endl;
    // occur overflow and underflow by force
    num1 += 1;
    num2 -= 1;
    // print overflowed and underflowed values
    cout << "The value of overflowed 'num1 + 1' : " << num1 << endl;
    cout << "The value of underflowed 'num2 - 1' : " << num2 << endl;
    return 0;
}