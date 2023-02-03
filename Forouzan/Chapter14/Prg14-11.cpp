/************************************************
 * An application file which uses Integer class *
************************************************/
#include "integer.h"

int main()
{
    for (int i = 0; i < 1000000; i++)
    {
        try
        {
            Integer integer(i);
            cout << integer.getValue() << endl;
        }
        catch (...)
        {
            cout << "Exception thrown." << endl;
        }
    }
    return 0;
}