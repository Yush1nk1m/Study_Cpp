#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 2; i++) {
        int temp;
        cout << "Enter the " << i << "th number : ";
        cin >> temp;
        sum += temp;
    }
    
    cout << "Sum of two numbers : " << sum;

    return 0;
}