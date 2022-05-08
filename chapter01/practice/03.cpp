#include <tchar.h>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
    char* STRING = new char[12];
    std::cout << "Enter a string (below 12 character) : ";
    std::cin >> STRING;

    std::cout << "String is \"" << STRING << "\"" << std::endl;
    
    delete[12] STRING;
    return 0;
}