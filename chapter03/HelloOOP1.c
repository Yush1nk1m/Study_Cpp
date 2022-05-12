#include <stdio.h>

// maker's code
typedef struct USERDATA
{
    int nAge;
    char szName[32];
} USERDATA;

// user's code
int main(void) 
{
    USERDATA user = { 20, "Cheol-Su" };
    printf("%d, %s\n", user.nAge, user.szName);

    return 0;
}