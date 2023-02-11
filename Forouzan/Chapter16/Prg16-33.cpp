/************************************************
 * An application file for message decryption   *
************************************************/
#include "monoalpha.h"

int main()
{
    MonoAlpha monoalpha;
    monoalpha.decrypt("cipherFile", "plainFile");
    return 0;
}