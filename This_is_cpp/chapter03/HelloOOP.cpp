#include <tchar.h>
#include <iostream>

// maker's code
class USERDATA
{
public :
    // declaration of member variable
    int nAge;
    char szName[32];

    // declaration and definition of member function
    void Print(void)
    {
        // nAge and szName are not the local variables of Print() function
        printf("%d, %s\n", nAge, szName);
    }
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    USERDATA user = { 10, "Cheol-Su" };
    user.Print();

    return 0;
}