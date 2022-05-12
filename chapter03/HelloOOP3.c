#include <stdio.h>

// maker's code
typedef struct USERDATA
{
    int nAge;
    char szName[32];
    void (*Print)(struct USERDATA*);
} USERDATA;

void PrintData(USERDATA* pUser)
{
    printf("%d, %s\n", pUser->nAge, pUser->szName);
}

// user's code
int main(void)
{
    USERDATA user = { 20, "Cheol-Su", PrintData };
    //printf("%d, %s\n", user.nAge, user.szName);       // stage 1
    //PrintData(&user);                                 // stage 2
    user.Print(&user);                                  // stage 3

    return 0;
}