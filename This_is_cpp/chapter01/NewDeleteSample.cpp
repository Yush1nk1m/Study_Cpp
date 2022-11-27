#include <tchar.h>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
    // The case when only the instance is dynamically generated
    int* pData = new int;

    // The case when the initial value is described
    int* pNewData = new int(10);
    *pData = 5;
    std::cout << *pData << std::endl;
    std::cout << *pNewData << std::endl;

    delete pData;
    delete pNewData;

    return 0;
}