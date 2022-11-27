// switch statement
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int userInput;

    cout << "Display my information" << endl;
    cout << "1. name" << endl;
    cout << "2. age" << endl;
    cout << "3. sex" << endl;
    cin >> userInput;

    switch (userInput) {
        case 1 :
            cout << "Yushin, Kim" << endl;
            break;

        case 2 :
            cout << "22 years old" << endl;
            break;

        case 3 :
            cout << "Male" << endl;
            break;
        
        default :
            cout << "Exit" << endl;
            break;
    }
    
    return 0;
}