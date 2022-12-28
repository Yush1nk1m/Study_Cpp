#include <iostream>
#include <limits>
using namespace std;

int main() {
    long longMin = numeric_limits<long>::min();
    long longMax = numeric_limits<long>::max();
    long long llMin = numeric_limits<long long>::min();
    long long llMax = numeric_limits<long long>::max();

    cout << "The minimum value of long type : " << longMin << endl;
    cout << "The maximum value of long type : " << longMax << endl;
    cout << "The minimum value of long long type : " << llMin << endl;
    cout << "The maximum value of long long type : " << llMax << endl;
    return 0;
}