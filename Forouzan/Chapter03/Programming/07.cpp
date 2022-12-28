#include <iostream>
using namespace std;

int main() {
    long time;
    cout << "Enter a time in an integer number : ";
    cin >> time;
    long week = time / (24 * 7);
    time %= (24 * 7);
    long day = time / 24;
    time %= 24;
    long hour = time;

    cout << "Week : " << week << endl;
    cout << "Day : " << day << endl;
    cout << "Hour : " << hour << endl;

    return 0; 
}