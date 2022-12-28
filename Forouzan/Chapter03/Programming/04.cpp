#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Enter an integer value : ";
    cin >> value;

    cout << "The second digit of given number : " << value / 10 % 10 << endl;
    return 0;
}