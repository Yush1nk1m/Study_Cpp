/****************************************************
 * A program which defines and utilizes functions   *
 * which receive input indicating year,             *
 * check if it is a leap year,                      *
 * print the result                                 *
****************************************************/
#include <iostream>
using namespace std;

// declaration(prototype)
int input();
bool process(int year);
void output(int year, bool result);

int main()
{
    // Input, processing, output
    int year = input();
    bool result = process(year);
    output(year, result);
    return 0;
}

/****************************************************************
 * Definition of input function                                 *
 * input function is called from main function,                 *
 * receives a value indicating year from the user and return,   *
 * checks if it is post-1582 when the function receives input,  *
 * has no parameter but return value                            *
****************************************************************/
int input()
{
    int year;
    do
    {
        cout << "Enter an year after 1582 : ";
        cin >> year;
    } while (year <= 1582);
    return year;
}
/****************************************************************
 * Definition of process function                               *
 * it receives an argument from main function,                  *
 * checks if the argument indicating year is leap year,         *
 * returns a bool type data,                                    *
 * has no additional action but a parameter and a return value  *
****************************************************************/
bool process(int year)
{
    bool criteria1 = (year % 4 == 0);
    bool criteria2 = (year % 100 != 0) || (year % 400 == 0);
    return (criteria1) && (criteria2);
}
/****************************************************************
 * Definition of output function                                *
 * it receives int type argument and bool type argument         *
 * and prints them on the screen                                *
****************************************************************/
void output(int year, bool result)
{
    if (result)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
    return;
}