#include <iostream>
using namespace std;

int main() {
    long hours, mins, seconds;
    
    cout << "Enter an hour in an integer number : ";
    cin >> hours;
    cout << "Enter a minute in an integer number : ";
    cin >> mins;
    cout << "Enter a second in an integer number : ";
    cin >> seconds;

    seconds += (mins * 60);
    seconds += (hours * 3600);

    cout << "Total seconds : " << seconds << endl;

    return 0;
}