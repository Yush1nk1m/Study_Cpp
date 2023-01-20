#include "04.h"

int main()
{
    Array array(10);

    for (int i = 1; i <= 10; i++)
    {
        array.insert(i);
    }

    array.print();

    return 0;
}