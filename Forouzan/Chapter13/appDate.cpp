/************************************************
 * An application file which uses Date class    *
************************************************/
#include "date.h"

int main()
{
    // instantiate 2 Date objects and print
    Date date1(2, 8, 2014);
    Date date2(10, 15, 1944);
    cout << "date1 : " << date1;
    cout << "date2 : " << date2 << endl;
    // use assignment operator, postfix increment operator
    Date date3 = date1;
    Date date4 = date2;
    date3++;
    date4++;
    cout << "date3 : " << date3;
    cout << "date4 : " << date4 << endl;
    // use complex assignment operator
    date3 += 20;
    date4 -= 130;
    cout << "date3 + 20 : " << date3;
    cout << "date4 -= 130 : " << date4 << endl;
    // calculate the difference between dates
    cout << "date3 - date4 : " << date3 - date4 << " days." << endl;
    return 0;
}