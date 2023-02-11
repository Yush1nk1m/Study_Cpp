/************************************************
 * An implementation file for MonoAlpha class   *
************************************************/
#include "monoalpha.h"
#include <fstream>

// costructor
MonoAlpha::MonoAlpha()
{
}
// destructor
MonoAlpha::~MonoAlpha()
{
}
// public member function
void MonoAlpha::encrypt(const char* plainFile, const char* cipherFile)
{
    ifstream ifStream(plainFile, ios::in);
    ofstream ofStream(cipherFile, ios::out);
    char c1, c2;
    while (ifStream.get(c1))
    {
        c2 = searchEncrypt(c1);
        ofStream.put(c2);
    }
    ifStream.close();
    ofStream.close();
}
// public member function
void MonoAlpha::decrypt(const char* cipherFile, const char* plainFile)
{
    ifstream ifStream(cipherFile, ios::in);
    ofstream ofStream(plainFile, ios::out);
    char c1, c2;
    while (ifStream.get(c1))
    {
        c2 = searchDecrypt(c1);
        ofStream.put(c2);
    }
    ifStream.close();
    ofStream.close();
}
// private member function
char MonoAlpha::searchEncrypt(char c)
{
    int i = 0;
    while (true)
    {
        if (key[i][0] == c)
        {
            return key[i][1];
        }
        i++;
    }
}
// private member function
char MonoAlpha::searchDecrypt(char c)
{
    int i = 0;
    while (true)
    {
        if (key[i][1] == c)
        {
            return key[i][0];
        }
        i++;
    }
}
// static key array definition
const char MonoAlpha::key[][2] = {
    {'a', 'N'}, {'b', 'N'}, {'c', 'A'}, {'d', 'T'}, {'e', 'R'}, {'f', 'B'},
    {'g', 'E'}, {'h', 'C'}, {'i', 'F'}, {'j', 'U'}, {'k', 'X'}, {'l', 'D'},
    {'m', 'Q'}, {'n', 'G'}, {'o', 'Y'}, {'p', 'L'}, {'q', 'K'}, {'r', 'H'},
    {'s', 'V'}, {'t', 'I'}, {'u', 'J'}, {'v', 'M'}, {'w', 'P'}, {'x', 'Z'},
    {'y', 'S'}, {'z', 'W'}
};