#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    srand(time(0));
    int arr[10];
    double average = 0.0, stdDev = 0.0;
    
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 + 1;
        average += arr[i];
    }
    average /= 10;
    
    for (int i = 0; i < 10; i++)
    {
        stdDev += pow(arr[i] - average, 2);
    }
    stdDev = sqrt(stdDev) / 10;

    cout << "Elements of the array : ";
    for (int i = 0; i < 10; i++)
    {
        cout << setw(4) << left << arr[i];
    }
    cout << endl;
    
    cout << "The average : " << average << endl;
    cout << "The standard deviation : " << stdDev << endl;

    return 0;
}