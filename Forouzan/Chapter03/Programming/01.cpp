#include <iostream>
#include <limits>
using namespace std;

int main() {
    short shortMin = numeric_limits<short>::min();
    short shortMax = numeric_limits<short>::max();
    unsigned int uiMin = numeric_limits<unsigned int>::min();
    unsigned int uiMax = numeric_limits<unsigned int>::max();

    cout << "The minimum value of short type : " << shortMin << endl;
    cout << "The maximum value of short type : " << shortMax << endl;
    cout << "The minimum value of unsigned int type : " << uiMin << endl;
    cout << "The maximum value of unsigned int type : " << uiMax << endl;
    return 0;
}