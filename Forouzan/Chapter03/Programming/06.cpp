// An algorithm based on this chapter's contents
#include <iostream>
using namespace std;

int main() {
    int originalValue, resultValue;
    cout << "Enter an three digits integer number : ";
    cin >> originalValue;

    resultValue = originalValue % 10 * 100;
    originalValue /= 10;
    resultValue += originalValue % 10 * 10;
    originalValue /= 10;
    resultValue += originalValue % 10;
    cout << "The reversed order digits is '" << resultValue << "'" << endl;

    return 0;
}