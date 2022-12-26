#include <iostream>
#include <string>
using namespace std;

int main() {
    string first;
    string last;
    
    cout << "What's your last name? : ";
    cin >> last;
    cout << "What's your first name? : ";
    cin >> first;

    cout << "Your english name is " << first << ", " << last;
    return 0;
}