#include <tchar.h>
#include <iostream>

// defalut value of parameter 'nParam' is 10
int TestFunc(int nParam = 10)
{
    return nParam;
}

int _tmain(int argc, _TCHAR* argv[])
{
    // apply defalut value because caller did not pass an argument
    std::cout << "TestFunc() : " << TestFunc() << std::endl;

    // ignore defalut value because caller passed an argument
    std::cout << "TestFunc(20) : " << TestFunc(20) << std::endl;

    return 0;
}