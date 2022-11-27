#include <iostream>

class Date {
    private :
        int year_;
        int month_;
        int day_;
    
    public :
        void ShowDate();

        Date() {
            std::cout << "Default Construct has been called." << std::endl;
            year_ = 2012;
            month_ = 7;
            day_ = 12;
        }

        Date(int year, int month, int day) {
            std::cout << "3 argument private Constructor has been called." << std::endl;
            year_ = year;
            month_ = month;
            day_ = day;
        }
};

void Date::ShowDate() {
    std::cout << "Today is " << year_ << "-" << month_ << "-" << day_ << "." << std::endl;
}

int main() {
    Date day = Date();
    Date day2(2012, 10, 31);

    day.ShowDate();
    day2.ShowDate();

    return 0;
}
