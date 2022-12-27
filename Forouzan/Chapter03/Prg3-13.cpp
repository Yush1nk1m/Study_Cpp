/********************************************************************
 * Evaluation order of three expressions with different priorities  *
********************************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration of a variable
    int result;
    // evaluate expression and assign it into variable 'result'
    result = 5 - 15 % 4;
    // print the value stored in variable 'result'
    cout << "The value stored in 'result' : " << result;
    return 0;
}