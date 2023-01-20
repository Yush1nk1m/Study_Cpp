/********************************************************************
 * In an application file, instantiate a class by simply passing    *
 * an argument indicating the path of a file,                       *
 * every processing is done by the constructor of the class         *
********************************************************************/
#include "course.h"

int main()
{
    // instantiation Course object
    Course course(10, "scores.dat");
    return 0;
}