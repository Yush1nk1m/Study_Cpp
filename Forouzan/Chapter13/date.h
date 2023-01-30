/************************************
 * An interface file for Date class *
************************************/
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
using namespace std;

class Date
{
    private:
        // instance data member
        int month;
        int day;
        int year;
        // static data member and member function
        static const int startWeekDay;
        static const int startYear;
        static const int daysInMonths[];
        static const string daysOfWeek[];
        static const string monthsOfYear[];
        static bool isLeap(int year);
        // private helper function
        bool isValid() const;
        string findWeekDay();
        int findTotalDays() const;
        void plusReset();
        void minusReset();
    public:
        // constructor and destructor
        Date(int month, int day, int year);
        Date();
        ~Date();
        // operator overload
        Date& operator++();
        Date& operator--();
        Date operator++(int);
        Date operator--(int);
        Date& operator+=(int days);
        Date& operator-=(int days);
        bool operator==(const Date& right) const;
        bool operator!=(const Date& right) const;
        Date& operator=(const Date& right);
        // friend operator function
        friend int operator-(const Date& date1, const Date& date2);
        friend ostream& operator<<(ostream& output, const Date& date);
};
#endif