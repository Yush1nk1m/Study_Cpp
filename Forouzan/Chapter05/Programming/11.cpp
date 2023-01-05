#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int minimum, maximum, score, counter = 0;

    minimum = numeric_limits<int>::max();
    maximum = numeric_limits<int>::min();

    while (counter < 10)
    {
        do
        {
            cout << "Enter a score : ";
            cin >> score;
        } while (score < 0 || score > 100);
        
        counter++;
        if (score < minimum) minimum = score;
        if (score > maximum) maximum = score;
    }
    
    cout << "The minimum score of " << counter << " numbers of scores : " << minimum << endl;
    cout << "The maximum score of " << counter << " numbers of scores : " << maximum << endl;

    return 0;
}