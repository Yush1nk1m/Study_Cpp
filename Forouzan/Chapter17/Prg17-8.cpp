/************************************************
 * A program which solves Hanoi tower problem   *
************************************************/
#include <iostream>
using namespace std;

// function declaration
void towers(int, char, char, char);
void moveOneDisk(char, char);

int main()
{
    // variable declaration
    int n;
    // input
    do
    {
        cout << "Enter the number of disk(0 ~ 4) : ";
        cin >> n;
    } while ((n < 1) || (n > 4));
    // function call
    towers(n, 'A', 'C', 'B');
}

// towers function definition
void towers(int num, char source, char destination, char auxiliary)
{
    if (num == 1)
    {
        moveOneDisk(source, destination);
    }
    else
    {
        towers(num - 1, source, auxiliary, destination);
        moveOneDisk(source, destination);
        towers(num - 1, auxiliary, destination, source);
    }
}
// moveOneDisk function definition
void moveOneDisk(char start, char end)
{
    cout << "Move disk from " << start << " to " << end << "." << endl;
}