/********************************************
 * A program which swaps two values passed  *
 * to the function with pass-by-pointer     *
********************************************/
#include <iostream>
using namespace std;

void swap(int* first, int* second);         // prototype

int main()
{
    // 2 variables definition
    int x = 10;
    int y = 20;
    // print the values of x and y before swapping
    cout << "The values of x and y before swapping" << endl;
    cout << "x : " << x << "\t" << "y : " << y << endl;
    // call swap function to swap variables x and y 
    swap(&x, &y);
    // print the values of x and y after swapping
    cout << "The values of x and y after swapping" << endl;
    cout << "x : " << x << "\t" << "y : " << y << endl;
    return 0;
}

/************************************************************
 * swap function swaps the values passed to the parameters  *
 * it swaps values received from main function              *
 * with pass-by-pointer mechanism                           *
************************************************************/
void swap(int* pX, int* pY)
{
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}