#include <iostream>
#include <limits>
using namespace std;

int main() {
    float floatMin = -numeric_limits<float>::max();
    float floatMax = +numeric_limits<float>::max();
    double doubleMin = -numeric_limits<double>::max();
    double doubleMax = +numeric_limits<double>::max();

    cout << "The minimum value of float type : " << floatMin << endl;
    cout << "The maximum value of float type : " << floatMax << endl;
    cout << "The minimum value of double type : " << doubleMin << endl;
    cout << "The maximum value of double type : " << doubleMax << endl;
    return 0;
}