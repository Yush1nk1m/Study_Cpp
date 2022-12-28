#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Enter an integer number : ";
    cin >> value;
    
    cout << "The first digit of given number : " << value % 10 << endl;
    cout << "The third digit of given number : " << value / 100 % 10 << endl;

    return 0;
}