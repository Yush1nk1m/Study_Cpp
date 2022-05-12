#include <iostream>

void TestFunc(int a)
{
    std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b = 10)
{
    std::cout << TestFunc(int, int) << std::endl;
}

// parameter name을 명시하지 않고 argument를 하나만 전달했을 시 ambiguous error가 발생한다.