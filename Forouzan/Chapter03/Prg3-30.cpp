/****************************************************
 * A program which divides the given seconds into   *
 * hour, minute, second and prints it               *
****************************************************/
#include <iostream>
using namespace std;

int main() {
    // variable declaration
    unsigned long duration, hours, minutes, seconds;
    // receive input
    cout << "Enter the hour as second unit positive integer : ";
    cin >> duration;
    // process;
    hours = duration / 3600L;
    minutes = (duration - (hours * 3600L)) / 60L;
    seconds = duration - (hours * 3600L) - (minutes * 60);
    // print
    cout << "The received duration : " << duration << endl;
    cout << "Result : " << hours << ":" << minutes << ":" << seconds << endl;
    return 0; 
}