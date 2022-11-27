#include <tchar.h>
#include <string>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    std::string name;
    cout << "Enter my name : ";
    cin >> name;

    int age;
    cout << "Enter my age : ";
    cin >> age;

    cout << "My name is " << name << ", " << age << " years old." << endl;

    return 0;
}