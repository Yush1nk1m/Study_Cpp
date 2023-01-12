/********************************************************
 * appTime.cpp application file which uses Time object  *
********************************************************/
#include "time.h"

int main()
{
    // initialize Time object
    Time time(4, 5, 27);
    // print the original time
    cout << "The original time : ";
    time.print();
    // add 143500 seconds to the original time
    for (int i = 0; i < 143500; i++)
    {
        time.tick();
    }
    cout << "After 143,500 seconds : ";
    time.print();
    return 0;
}