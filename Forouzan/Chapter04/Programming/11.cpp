#include <iostream>
using namespace std;

int main()
{
    int dollar100, dollar50, dollar20, dollar10, dollar5, dollar1, dollar;
    
    cout << "Enter the amount of money in dollars : ";
    cin >> dollar;

    dollar100 = dollar / 100;
    dollar %= 100;
    dollar50 = dollar / 50;
    dollar %= 50;
    dollar20 = dollar / 20;
    dollar %= 20;
    dollar10 = dollar / 10;
    dollar %= 10;
    dollar5 = dollar / 5;
    dollar %= 5;
    dollar1 = dollar / 1;

    cout << "The total number of papers";
    cout << "100 dollars paper : " << dollar100 << endl;
    cout << "50 dollars paper : " << dollar50 << endl;
    cout << "20 dollars paper : " << dollar20 << endl;
    cout << "10 dollars paper : " << dollar10 << endl;
    cout << "5 dollars paper : " << dollar5 << endl;
    cout << "1 dollars paper : " << dollar1 << endl;

    return 0;
}