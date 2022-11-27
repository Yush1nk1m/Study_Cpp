#include <tchar.h>
#include <iostream>

template <typename T>
T Add(T a, T b)
{
    return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
    std::cout << Add<int>(3, 4) << std::endl;
    std::cout << Add<double>(3.3, 4.4) << std::endl;

    return 0;
}