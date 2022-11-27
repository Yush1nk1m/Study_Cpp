#include <iostream>

class Date {
    private :
        int year_;
        int month_;     // from 1 to 12
        int day_;       // from 1 to 31
        short isLeap_;
        
        int dayLeap[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int dayNonLeap[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        int isLeap(int year) {
            if (year % 4 == 0) {
                if (year % 100 == 0 && year % 400 != 0) return false;
                else return true;
            }
            return false;
        }

    public :

        void SetDate(int year, int month, int day) {
            year_ = year;
            month_ = month;
            day_ = day;
            isLeap_ = isLeap(year);
        }

        void AddDay(int inc) {
            day_ += inc;
            int tempDAY = day_;
            
            if (month_ == 2) {
                if (isLeap_ == true) {
                    day_ %= dayLeap[month_];
                } else {
                    day_ %= dayNonLeap[month_];
                }
            } else {
                day_ %= dayNonLeap[month_];
            }

            if (tempDAY > day_) {
                month_++;
                int tempMONTH = month_;
                month_ %= 12;

                if (tempMONTH > month_) {
                    year_++;
                    isLeap_ = isLeap(year_);
                }
            }
        }

        void AddMonth(int inc) {
            month_ += inc;
            int tempMONTH = month_;
            month_ %= 12;

            if (tempMONTH > month_) {
                year_++;
                isLeap_ = isLeap(year_);
            }
        }

        void AddYear(int inc) {
            year_ += inc;
            isLeap_ = isLeap(year_);
        }

        void ShowDate() {
            std::cout << year_ << "-" << month_ << "-" << day_ << std::endl;
        }
};