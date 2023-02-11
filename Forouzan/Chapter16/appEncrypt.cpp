/************************************************
 * An application file for message encryption   *
************************************************/
#include "monoalpha.h"

int main()
{
    MonoAlpha monoalpha;
    monoalpha.encrypt("plainFile", "cipherFile");
    return 0;
}