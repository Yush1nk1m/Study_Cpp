#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number, sum = 0, counter = 0;
    double average = 0.0;

    do
    {
        cout << "Enter a number under 1000 : ";
        cin >> number;
        counter++;
        sum += number;
    } while (number < 1000);
    sum -= number;
    counter--;

    if (counter > 0)
    {
        average = static_cast<double>(sum) / counter;       
    }

    cout << fixed << setprecision(2);
    cout << "The sum of numbers : " << sum << endl;
    cout << "The average of numbers : " << average << endl;

    return 0;
}