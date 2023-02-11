/********************************************
 * An interface file for MonoAlpha class    *
********************************************/
#ifndef MONOALPHA_H
#define MONOALPHA_H
#include <iostream>
using namespace std;

class MonoAlpha
{
    private:
        static const char key[][2];
        char searchEncrypt(char c);
        char searchDecrypt(char c);
    public:
        MonoAlpha();
        ~MonoAlpha();
        void encrypt(const char* plainFile, const char* cipherFile);
        void decrypt(const char* cipherFile, const char* plainFile);
};
#endif