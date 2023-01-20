/************************************************************************************
 * Define a helper function which helps constructor as a private member function    *
 * A program which does every processing in the constructor and                     *
 * in the destructor, deletes the memory region at the heap and closes the file     *
************************************************************************************/
#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <fstream>
using namespace std;

class Course
{
    private:
        int numOfStds;
        const char* inputFileName;
        ifstream inputFile;
        struct Student
        {
            int id;
            int score;
            char grade;
            double deviation;
        };
        Student* students;
        double averageScore;
        double standardDeviation;
        void getInputs();
        void setGrades();
        void setAverage();
        void setDeviations();
        void printResult() const;
    
    public:
        Course(int numOfStds, const char* inputFileName);
        ~Course();
};
#endif