/************************************************
 * An implementation file for Tokenizer class   *
************************************************/
#include "tokenizer.h"

// constructor
Tokenizer::Tokenizer(const string& target, const string& delim)
: target(target), delim(delim)
{
    begin = target.find_first_not_of(delim, 0);
    end = target.find_first_of(delim, begin);
}
// destructor
Tokenizer::~Tokenizer()
{
}
// check if there is any additional token
bool Tokenizer::moreToken() const
{
    return (begin != -1);
}
// return next token
string Tokenizer::nextToken()
{
    string token = target.substr(begin, end - begin);
    begin = target.find_first_not_of(delim, end);
    end = target.find_first_of(delim, begin);
    return token;
}