/********************************************************************
 * A header file which defines user-defined functions               *
 * pushFront function appends a character at the most left side     *
 * pushBack function appends a character at the most right side     *
 * popFront function deletes a character at the most left side      *
 * popBack functino deletes a character at the most right side      *
********************************************************************/
#ifndef cumtom_H
#define custom_H
#include <iostream>
#include <string>
using namespace std;

// definition of pushFront function
void pushFront(string& strg, char c)
{
    string temp(1, c);
    strg.insert(0, temp);
}
// definition of pushBack function
void pushBack(string& strg, char c)
{
    string temp(1, c);
    strg.append(temp);
}
// definition of popFront function
char popFront(string& strg)
{
    int index = 0;
    char temp = strg[index];
    strg.erase(index, 1);
    return temp;
}
// definition of popBack function
char popBack(string& strg)
{
    int index = strg.size() - 1;
    char temp = strg[index];
    strg.erase(index, 1);
    return temp;
}
#endif