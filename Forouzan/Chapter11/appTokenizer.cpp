/************************************************************
 * An application file which does tests for Tokenizer class *
************************************************************/
#include "tokenizer.h"

int main()
{
    // string to tokenize
    string target("This is the string to be tokenized. \n");
    // string to use as a delimiter
    string delimit(" \n");      // use space and new line as delimiters
    // Tokenizer object instantiation
    Tokenizer tokenizer(target, delimit);
    // find token based on target string and print
    while (tokenizer.moreToken())
    {
        cout << tokenizer.nextToken() << endl;
    }
    return 0;
}