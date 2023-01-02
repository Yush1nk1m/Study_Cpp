#include <iostream>
using namespace std;

int main()
{
    int credits, fee;
    cout << "Enter the number of credits to complete : ";
    cin >> credits;

    if (credits >= 12)
    {
        fee = 130;
    }
    else
    {
        fee = 10 * credits + 10;
    }

    cout << "The fee you have to pay is $" << fee << endl;
    
    return 0;
}