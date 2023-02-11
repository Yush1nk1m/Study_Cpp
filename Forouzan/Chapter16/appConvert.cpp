/****************************************************************
 * An application program which uses toString, toData functions *
****************************************************************/
#include "convert.h"

int main()
{
    // convert an integer 12 into the string
    string strg = toString(12);
    cout << "String : " << strg << endl;
    // convert a string "15.67" into the double data type
    double data = toData<double>("15.67");
    cout << "Data : " << data;
    return 0;
}