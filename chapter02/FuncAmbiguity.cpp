#include <tchar.h>
#include <iostream>

void TestFunc(int a)
{
    std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b = 10)
{
    std::cout << "TestFunc(int, int)" << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
    //TestFunc(5);  // generate compile error
    TestFunc(5, 10);

    return 0;
}