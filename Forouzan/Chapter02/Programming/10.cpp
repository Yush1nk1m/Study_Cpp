#include <iostream>
#include <string>
using namespace std;

int main() {
    string city;
    string district;
    string streetName;
    string streetNumber;
    string postNumber;

    cout << "Enter the name of city : ";
    cin >> city;
    cout << "Enter the name of district : ";
    cin >> district;
    cout << "Enter the name of street : ";
    cin >> streetName;
    cout << "Enter the number of street : ";
    cin >> streetNumber;
    cout << "Enter the post number : ";
    cin >> postNumber;

    cout << city << "-Si, " << district << "-Gu, " << streetName << "-Ro, " << streetNumber << ", " << postNumber;

    return 0;
}