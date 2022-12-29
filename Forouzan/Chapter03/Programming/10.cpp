#include <iostream>
using namespace std;

int main() {
    int score1, score2, score3, score4;
    double average = 0.0;

    cout << "Enter the first score : ";
    cin >> score1;
    cout << "Enter the second score : ";
    cin >> score2;
    cout << "Enter the third score : ";
    cin >> score3;
    cout << "Enter the fourth score : ";
    cin >> score4;
    average += (score1 + score2 + score3 + score4);
    average /= 4;

    cout << "The average of four scores : " << average << endl;

    return 0;
}