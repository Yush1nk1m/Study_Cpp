/************************************
 * A program which swaps two values *
 * passed by pass-by-reference      *
************************************/
#include <iostream>
using namespace std;

void swap(int& first, int& second);         // prototype

int main()
{
    // two variables definition
    int x = 10;
    int y = 20;
    // print the values of x, y before swapping
    cout << "The values of x and y before swapping" << endl;
    cout << "x : " << x << "\t\t" << "y : " << y << endl;
    // swap x and y with swap function
    swap(x, y);
    // print the values of x, y after swapping
    cout << "The values of x and y after swapping" << endl;
    cout << "x : " << x << "\t\t" << "y : " << y << endl;
    return 0;
}

/********************************************************
 * swap function swaps values passed as parameters      *
 * with pass-by-reference, swap the values of variables *
 * passed from main function                            *
********************************************************/
void swap(int& rX, int& rY)
{
    int temp = rX;
    rX = rY;
    rY = temp;
}