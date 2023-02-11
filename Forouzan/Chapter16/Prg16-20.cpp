/************************************************************
 * Header file defines 2 template functions                 *
 * The first function converts basic data type into string  *
 * The second function converts string into basic data type *
************************************************************/
#ifndef CONVERT_H
#define CONVERT_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// toString funciton converts the other data types into the string
template<typename T>
string toString(T data)
{
    ostringstream oss("");
    oss << data;
    return oss.str();
}
// toData function converts the string into the other data types
template<typename T>
T toData(string strg)
{
    T data;
    istringstream iss(strg);
    iss >> data;
    return data;
}
#endif