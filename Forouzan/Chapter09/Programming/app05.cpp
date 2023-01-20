#include "05.h"
#include <ctime>

int main()
{
    srand(time(0));
    SortedArray array(10);
    
    for (int i = 0; i < 10; i++)
    {
        int temp = rand() % 200;
        array.insert(temp);
        cout << "A data " << temp << " is inserted." << endl;
    }

    array.print();
}