/******************************************************
 * Comparison casting and promotion in an expression  *
******************************************************/
#include <iostream>
using namespace std;

int main() {
    // declaration
    double x = 23.56;
    int y = 30;
    // promotion
    cout << "The case when casting is not used : " << x + y << endl;
    // casting
    cout << "The case when casting is used : " << static_cast<int>(x) + y;
    return 0;
}