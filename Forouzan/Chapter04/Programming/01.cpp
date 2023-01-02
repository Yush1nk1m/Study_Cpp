#include <iostream>
using namespace std;

int main()
{
    unsigned int num;
    cout << "Enter an unsigned two digits integer : ";
    cin >> num;

    cout << num % 10 << (num / 10) % 10 << endl;
    return 0;
}